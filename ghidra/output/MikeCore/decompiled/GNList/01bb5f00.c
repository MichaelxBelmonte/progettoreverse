// Function: FUN_01bb5f00
// Address: 01bb5f00
// Size: 634 bytes
// Class: GNList


ulonglong FUN_01bb5f00(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  float fVar8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  float local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x688))();
  plVar6 = (longlong *)(ulonglong)uVar5;
  cVar4 = (char)uVar5;
  if ((cVar4 != '\0') && (param_2 != '\0')) {
    (**(code **)(*unaff_RDI + 0x3f8))();
    lVar2 = local_48;
    if ((local_40 == '\0') &&
       (((local_48 != 0 && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_31 = cVar4;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar6 = (longlong *)unaff_RDI[0x1d];
        (**(code **)(*(longlong *)unaff_RDI[0x1c] + 0x960))();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        fVar8 = (float)(**(code **)(*plVar6 + 0x380))();
        local_5c = fVar8;
        if ((local_50 != '\0') && (local_58 != 0)) {
          fVar8 = (float)FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          fVar8 = (float)FUN_00d50b20();
        }
        local_88 = '\0';
        local_90 = lVar1;
        FUN_019a54a0(fVar8,&local_90);
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 == 0) {
          local_68 = '\0';
          local_70 = lVar1;
          (**(code **)(*unaff_RDI + 0x6c0))(local_5c);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
          local_80 = lVar1;
          fVar8 = (float)FUN_00d459e0();
          (**(code **)(*unaff_RDI + 0x6c0))(local_5c + fVar8);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00d50b20();
    plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),local_31);
  }
  return (ulonglong)plVar6 & 0xffffffff;
}


