// Function: FUN_01365ec0
// Address: 01365ec0
// Size: 1054 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01365ec0(double param_1,double param_2,double param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  pthread_key_t in_ECX;
  pthread_key_t pVar6;
  char in_DL;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar8;
  double dVar9;
  ulonglong in_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong in_XMM1_Qb;
  undefined1 auVar12 [16];
  ulonglong in_XMM2_Qb;
  longlong local_c8;
  char local_c0;
  undefined1 local_60 [8];
  undefined1 local_58;
  undefined8 *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar7 = *(longlong **)(unaff_RSI + 0x38);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(longlong **)(unaff_RSI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = (double)(**(code **)(*plVar7 + 0x370))();
  if (param_1 - param_2 < 0.0) {
LAB_01366038:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar7 = *(longlong **)(unaff_RSI + 0x38);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(longlong **)(unaff_RSI + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar7 + 0x398))();
  if (dVar9 <= param_1 + param_3) goto LAB_01366038;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_007ef480();
  *puVar5 = &DAT_025e6260;
  pVar6 = 0x25e66c0;
  puVar5[7] = &DAT_025e66c0;
  puVar5[0x1c] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  *(undefined4 *)(puVar5 + 0x1b) = 0;
  (*DAT_025e6278)();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (param_3 + param_2) * dVar8;
  auVar12._8_8_ = in_XMM1_Qb & _UNK_023945b8;
  auVar10._8_8_ = _UNK_023945b8 & in_XMM2_Qb;
  auVar12._0_8_ =
       (double)((ulonglong)(param_2 * dVar8) & _DAT_023945b0 | DAT_0240d3d8) + param_2 * dVar8;
  auVar10._0_8_ = (double)(_DAT_023945b0 & (ulonglong)dVar9 | DAT_0240d3d8) + dVar9;
  auVar12 = roundsd(auVar12,auVar12,0xb);
  auVar10 = roundsd(auVar10,auVar10,0xb);
  pVar6 = (pthread_key_t)(longlong)auVar10._0_8_;
  auVar11._8_8_ = _UNK_023945b8 & in_XMM0_Qb | _UNK_023945c8;
  auVar11._0_8_ =
       (double)(_DAT_023945b0 & (ulonglong)(param_1 * dVar8) | _DAT_023945c0) + param_1 * dVar8;
  auVar10 = roundsd(auVar11,auVar11,0xb);
  FUN_014bad20(auVar10._0_8_,(longlong)auVar12._0_8_);
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bae10();
  FUN_01329030();
  FUN_0134b100();
  if (in_DL == '\0') goto LAB_01366267;
  local_48 = '\0';
  local_50 = puVar5;
  FUN_0135dd30();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = 1;
  pVar6 = 1;
  FUN_01355320(1,local_60,0);
  if ((local_c0 == '\0') && (local_c8 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((*(longlong *)(unaff_RSI + 0x1f8) == 0) && (*(longlong *)(unaff_RSI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RSI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_01366229;
LAB_01366235:
    if (*(int *)(local_c8 + 0xc) != 0) {
      FUN_013357a0();
    }
  }
  else {
LAB_01366229:
    cVar1 = FUN_01334f30();
    if (cVar1 != '\0') goto LAB_01366235;
    if (local_c8 == 0) goto LAB_01366267;
  }
  FUN_00d50b20();
LAB_01366267:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


