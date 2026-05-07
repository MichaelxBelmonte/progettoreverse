// Function: FUN_01d29ff0
// Address: 01d29ff0
// Size: 1091 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x01d2a0cf) */
/* WARNING: Removing unreachable block (ram,0x01d2a0db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d29ff0(uint param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  local_50 = (longlong *)0x0;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_58 = (longlong *)0x0;
  if (*(char *)(unaff_RSI + 0x80) != '\0') {
    *(undefined1 *)(unaff_RSI + 0x80) = 0;
    FUN_01d2bdc0();
  }
  local_48 = *(longlong *)(unaff_RSI + 0x18);
  if (local_48 == 0) {
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  FUN_00d50b00();
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(local_48 + 0xc))) {
    plVar5 = *(longlong **)(*(longlong *)(local_48 + 0x10) + (ulonglong)param_1 * 8);
    local_68 = param_2;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
      local_50 = plVar5;
    }
    FUN_00d21140();
    if (*local_68 == 0) goto LAB_01d2a302;
    plVar4 = plVar5;
    if (*(longlong *)(unaff_RSI + 0x30) != 0) {
      FUN_00d50b00();
      uVar7 = FUN_00d50b20();
      local_60 = *(longlong *)(unaff_RSI + 0x30);
      if (local_60 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_98 = *local_68;
      local_90 = '\0';
      FUN_00c85680(uVar7,&local_98);
      plVar6 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        local_58 = plVar6;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = local_40;
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00057a80();
        (**(code **)(*plVar6 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') {
          plVar6 = DAT_02802688;
        }
        if (plVar6 != (longlong *)0x0) {
          local_88 = *local_68;
          local_80 = '\0';
          (**(code **)(*plVar5 + 0x98))(extraout_XMM0_Da,&local_88);
          plVar6 = local_40;
          if (local_40 == plVar5) {
LAB_01d2a268:
            if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar4 = plVar6;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_50 = plVar6;
              FUN_00d50b20();
              plVar5 = local_40;
              goto LAB_01d2a268;
            }
            local_50 = local_40;
            FUN_00d50b20();
            local_38 = '\0';
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = local_50;
      plVar4 = local_50;
      if (cVar1 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 == (longlong *)0x0) {
        local_78 = local_50;
        local_70 = '\0';
        FUN_00d235a0();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d243f0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01d2a302;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_01d2a302:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


