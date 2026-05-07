// Function: FUN_01cfd290
// Address: 01cfd290
// Size: 805 bytes
// Class: GNScrollView


undefined8 * FUN_01cfd290(float param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  plVar6 = (longlong *)*unaff_RSI;
  FUN_001b9d20();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01cfd2e8;
  }
  unaff_RSI = &DAT_02802688;
LAB_01cfd2e8:
  lVar1 = *unaff_RSI;
  lVar3 = unaff_RSI[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_026792c0;
      puVar7[5] = 0;
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x19) = 0;
      FUN_00d500e0();
      local_a8 = *param_2;
      local_a0 = 0;
      FUN_01cfb0d0(param_1,&local_a8);
      *unaff_RDI = puVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar6 + 0x18))();
  local_88 = '\0';
  local_90 = lVar1;
  FUN_01f7bcc0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  for (iVar8 = 0; iVar5 = FUN_01f7c6f0(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01f7c770(extraout_XMM0_Da,iVar8);
    lVar1 = local_80;
    if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    local_44 = *(float *)(lVar1 + 0x10);
    local_48 = *(float *)(lVar1 + 0x14);
    local_60 = *(float *)(lVar2 + 0x10);
    local_5c = *(float *)(lVar2 + 0x14);
    local_4c = *(float *)(lVar1 + 0x18);
    local_58 = *(float *)(lVar2 + 0x18);
    local_50 = *(float *)(lVar1 + 0x1c);
    local_54 = *(float *)(lVar2 + 0x1c);
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_026792c0;
    puVar7[5] = 0;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x19) = 0;
    FUN_00d500e0();
    uVar9 = FUN_01cfce50((local_60 - local_44) * param_1 + local_44,
                         (local_5c - local_48) * param_1 + local_48,
                         (local_58 - local_4c) * param_1 + local_4c,
                         (local_54 - local_50) * param_1 + local_50);
    local_68 = '\x01';
    local_70 = puVar7;
    FUN_01f7c700(uVar9,iVar8);
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


