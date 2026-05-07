// Function: FUN_00d2ebb0
// Address: 00d2ebb0
// Size: 664 bytes
// Class: Unknown


void FUN_00d2ebb0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *local_90;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    local_88 = 0;
    local_90 = (longlong *)0x0;
    local_70 = 0;
    local_78 = 0;
    local_80 = lVar1;
    local_48 = plVar5;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        local_90 = plVar5;
        FUN_00051000();
        pplVar6 = (longlong **)&DAT_02802688;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar6 = &local_90;
          if (cVar4 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar6;
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar2 == (longlong *)0x0) goto LAB_00d2ecf0;
          FUN_00d50b00();
LAB_00d2eccd:
          (**(code **)(*plVar2 + 0x3d8))();
          lVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_58 = lVar3;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          *(undefined1 *)(pplVar6 + 1) = 0;
          if (plVar2 != (longlong *)0x0) goto LAB_00d2eccd;
LAB_00d2ecf0:
          local_60 = '\0';
          local_68 = plVar5;
          FUN_00d428c0();
          lVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_58 = lVar3;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
        local_78 = CONCAT44(local_78._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00c6f7c0();
    plVar5 = local_48;
  }
  local_88 = '\0';
  local_90 = plVar5;
  FUN_00d243f0();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


