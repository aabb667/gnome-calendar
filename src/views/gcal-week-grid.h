/* gcal-week-grid.h
 *
 * Copyright (C) 2016 Vamsi Krishna Gollapudi <pandu.sonu@yahoo.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCAL_WEEK_GRID_H
#define GCAL_WEEK_GRID_H

#include "gcal-manager.h"
#include "gcal-event-widget.h"
#include "gcal-subscriber-view.h"

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GCAL_TYPE_WEEK_GRID (gcal_week_grid_get_type())

G_DECLARE_FINAL_TYPE (GcalWeekGrid, gcal_week_grid, GCAL, WEEK_GRID, GtkContainer)

void                 gcal_week_grid_set_manager                  (GcalWeekGrid       *week_grid,
                                                                  GcalManager        *manager);

void                 gcal_week_grid_set_first_weekday            (GcalWeekGrid       *week_grid,
                                                                  gint                nr_day);

void                 gcal_week_grid_set_use_24h_format           (GcalWeekGrid       *week_grid,
                                                                  gboolean            use_24h_format);

void                 gcal_week_grid_set_current_date             (GcalWeekGrid       *week_grid,
                                                                  icaltimetype       *current_date);

void                 gcal_week_grid_add_event                    (GcalWeekGrid       *self,
                                                                  GcalEvent          *event);

void                 gcal_week_grid_remove_event                 (GcalWeekGrid       *self,
                                                                  const gchar        *uid);

G_END_DECLS

#endif /* GCAL_WEEK_GRID_H */