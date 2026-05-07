// Function: FUN_00d227f0
// Address: 00d227f0
// Size: 1321 bytes
// Class: GNNull


/* WARNING: Removing unreachable block (ram,0x00d22830) */
/* WARNING: Removing unreachable block (ram,0x00d2283c) */

void FUN_00d227f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d50de0();
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  lVar2 = DAT_0277cf70;
  lVar4 = DAT_0277cf50;
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (*(char *)(unaff_RDI + 0x1e) == '\0') {
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,4);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if (*(char *)(unaff_RDI + 0x1e) == '\0') {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    if (0 < *(int *)(unaff_RDI + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar4 * 8);
        local_68 = '\0';
        (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(unaff_RDI + 0xc));
    }
  }
  else {
    if (*(char *)(unaff_RDI + 0x1c) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf50 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar4;
      local_f8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_100);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = DAT_0277cf58;
    if (*(char *)(unaff_RDI + 0x1d) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf58 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar4;
      local_e8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = DAT_0277cf60;
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0277cf60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar4;
    local_d8 = '\x01';
    (**(code **)(*plVar1 + 0x488))(param_1,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))();
    local_c0 = DAT_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277cf68 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0x498))(param_1,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(unaff_RDI + 0xc)) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar4 * 8);
          plVar1 = (longlong *)*unaff_RSI;
          if (*(char *)(unaff_RDI + 0x1e) == '\0') {
            local_98 = '\0';
            local_a0 = lVar2;
            FUN_00d93550();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            (**(code **)(*plVar1 + 0x4f8))(param_1,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8 = '\0';
            local_b0 = lVar2;
            FUN_00d93550();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            (**(code **)(*plVar1 + 0x4f0))(param_1,&local_60);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(unaff_RDI + 0xc));
      }
    }
    else {
      FUN_00d50b00();
      FUN_00e4ad10();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


