// Function: FUN_00720770
// Address: 00720770
// Size: 1915 bytes
// Class: MUTempoEditorView
// String references:
//   "%@.orig%I.%@"
//   "%@.orig%I"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void* FUN_00720770(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  uint32_t local_a0;
  int64_t *local_98;
  char local_90;
  int local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int local_44;
  int64_t *local_40;
  int64_t *local_38;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar4 == '\0')) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    plVar7 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x380))();
    plVar6 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar3 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    local_60 = local_a8;
    if (((char)local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if (((char)local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((plVar7 == (int64_t *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 0)) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_40 = plVar6;
      local_38 = plVar7;
      local_44 = 1;
      plVar7 = (int64_t *)0x0;
      bVar1 = false;
      do {
        if ((local_40 == (int64_t *)0x0) || (iVar5 = FUN_00d8c7a0(), iVar5 < 1)) {
          plVar6 = local_38;
          local_a0 = 2;
          local_a8 = &g_024c5048;
          local_90 = 0;
          FUN_00d50b00();
          local_98 = plVar6;
          local_90 = '\x01';
          local_a8 = (int64_t *)&g_025df2a0;
          local_88 = local_44;
          FUN_00d8cb40();
          local_b8 = local_70;
          local_b0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_b0 = '\x01';
          local_e0 = local_60;
          local_d8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_e0,&local_b8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (plVar7 != (int64_t *)0x0)) {
              if (local_50 != '\0') goto LAB_00720aef;
              FUN_00d50b00();
LAB_00720c70:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720d33:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720c70;
              }
              goto joined_r0x00720d33;
            }
            if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720aef:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &g_024c5048;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_f8 = local_40;
          FUN_00743400(&local_f8,&local_44,3);
          FUN_00d8cb40();
          local_c8 = local_70;
          local_c0 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_c0 = '\x01';
          local_f0 = local_60;
          local_e8 = '\0';
          (**(code **)(*plVar3 + 0x4f8))(&local_f0,&local_c8);
          plVar6 = local_58;
          if (local_58 == plVar7) {
            plVar6 = plVar7;
            bVar2 = bVar1;
            if ((!bVar1) && (local_58 != (int64_t *)0x0)) {
              if (local_50 != '\0') goto LAB_00720b9d;
              FUN_00d50b00();
LAB_00720d49:
              plVar6 = plVar7;
              bVar2 = true;
            }
joined_r0x00720e5c:
            plVar7 = plVar6;
            bVar1 = bVar2;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = plVar6;
                goto LAB_00720d49;
              }
              goto joined_r0x00720e5c;
            }
            if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00720b9d:
            local_50 = '\0';
            plVar7 = plVar6;
            bVar1 = true;
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = (int64_t *)&g_0250bfd8;
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = &g_024c5048;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_44 = local_44 + 1;
        cVar4 = (**(code **)(*plVar7 + 0x398))();
      } while (((cVar4 != '\0') || (cVar4 = (**(code **)(*plVar7 + 0x3a0))(), cVar4 != '\0')) &&
              (local_44 < 99999));
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      plVar7 = local_38;
      plVar6 = local_40;
    }
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

