function export_agent_evaluation(figname, ref, T_a, T_f, T_out, u)
    % Figure with 2 subplots
    font_size = 24;
    line_width = 1.0;
    dir = "./results/";
    
    fig = figure("WindowState","fullscreen");
    tiles = tiledlayout(2,1, 'TileSpacing','compact');
    % First plot has 3 lines: reference, air temp, outside temp
    ax1 = nexttile;
    hold on;
    % Draw a floor temp line
    plot(T_f, "Color", "#D95319", "LineWidth", line_width);
    % Draw an air temp line
    plot(T_a, "Color", "#0072BD", "LineWidth", line_width);
    % Draw a reference line
    stairs(ref, "k--", "LineWidth", line_width);
    % Draw an outside temp line
    plot(T_out, "Color", "#77AC30", "LineWidth", line_width);

    grid on;
    legend(ax1, {'Floor','Air','Setpoint','Outside'},...
        "FontSize", font_size-4,...
        "Location", "eastoutside");
    ylabel('Temperature (°C)', 'FontSize', font_size);
    % yticks(T_out-1:1:28);
    hold off;
    % Second plot has 2 lines: PWM duty cycle and PWM state
    ax2 = nexttile;
    hold on;
    stairs(u, "k-", LineWidth=line_width);    
    legend(ax2, {'Duty Cycle'}, 'FontSize', font_size-4,...
        "Location", "eastoutside");
    ylabel(ax2, 'Duty Cycle (%)', 'FontSize', font_size);
    hold off;
    % Shared properties
    tiles.Title.String = figname;
    tiles.Title.FontSize = font_size;
    xlabel(tiles, 'Time (step)', 'FontSize', font_size);
    exportgraphics(fig, append(dir, strrep(figname,' ',''), ".eps"));
    exportgraphics(fig, append(dir, strrep(figname,' ',''), ".emf"));
    exportgraphics(fig, append(dir, strrep(figname,' ',''), ".png"));
end

