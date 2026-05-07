// Function: FUN_01c89130
// Address: 01c89130
// Size: 1364 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c89647) */
/* WARNING: Removing unreachable block (ram,0x01c89516) */
/* WARNING: Removing unreachable block (ram,0x01c89522) */
/* WARNING: Removing unreachable block (ram,0x01c894da) */
/* WARNING: Removing unreachable block (ram,0x01c894e6) */
/* WARNING: Removing unreachable block (ram,0x01c895b2) */
/* WARNING: Removing unreachable block (ram,0x01c895bb) */
/* WARNING: Removing unreachable block (ram,0x01c89650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c89130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  pthread_key_t pVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  unaff_RDI[0x31] = param_2;
  local_c8 = *unaff_RSI;
  local_c0 = 0;
  FUN_01c8b390(param_1,&local_c8,&local_58);
  pVar6 = (pthread_key_t)param_1;
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  local_38 = local_d8;
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = unaff_RDI[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c98e0();
  uVar8 = (**(code **)(*plVar1 + 0x390))();
  auVar9._0_4_ = _DAT_023945e0 & (uint)(float)uVar8;
  auVar9._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar8 >> 0x20);
  auVar9._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
  auVar9._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar10._4_12_ = SUB1612(auVar9 | _DAT_023945f0,4);
  auVar10._0_4_ = SUB164(auVar9 | _DAT_023945f0,0) + (float)uVar8;
  auVar9 = roundss(ZEXT816(0),auVar10,0xb);
  fVar7 = auVar9._0_4_ + local_58;
  local_58 = fVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_026016d8;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  (*DAT_026016f0)();
  FUN_0123ff00();
  FUN_01786a50();
  FUN_01c886d0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = &DAT_026703c8;
  puVar4[2] = 0;
  FUN_00d500e0();
  plVar1 = (longlong *)puVar4[2];
  if (plVar1 != unaff_RDI) {
    FUN_00d50b00();
    puVar4[2] = unaff_RDI;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(undefined4 *)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(undefined1 *)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(undefined4 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *puVar5 = &DAT_0269c118;
  puVar5[2] = &DAT_0269cc70;
  puVar5[0x39] = &DAT_0269ccb0;
  puVar5[0x45] = 0;
  *(undefined2 *)(puVar5 + 0x46) = 0;
  puVar5[0x47] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  *(undefined4 *)(puVar5 + 0x3c) = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x205) = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar4 = (undefined8 *)unaff_RDI[0x30];
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x30] = (longlong)puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_58 = fVar7 + DAT_02394210;
  local_50 = local_50 + DAT_023908ec;
  plVar1 = (longlong *)unaff_RDI[0x30];
  FUN_00d05530(CONCAT44(uStack_54,local_58),CONCAT44(uStack_4c,local_50),DAT_02390d34);
  (**(code **)(*plVar1 + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x9c8))();
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x968))();
  FUN_01e058f0();
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x3a0))();
  lVar2 = DAT_027ece20;
  plVar1 = (longlong *)unaff_RDI[0x30];
  if (DAT_027ece20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0xa20))();
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0xa80))();
  local_40 = 0;
  local_48 = unaff_RDI[0x30];
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x30] + 0xac0))();
  FUN_00d50b20();
  FUN_00d50b20();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}


