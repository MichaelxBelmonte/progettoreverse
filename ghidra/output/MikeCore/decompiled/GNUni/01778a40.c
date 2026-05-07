// Function: FUN_01778a40
// Address: 01778a40
// Size: 1068 bytes
// Class: GNUni


undefined8 * FUN_01778a40(undefined8 param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *unaff_RSI;
  longlong *plVar12;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  int iVar14;
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_013faed0();
  iVar3 = FUN_00e7d780((float)dVar2);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00d23340();
  uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
  pcVar11 = local_38;
  if (local_40[0] != '\0') {
    pcVar11 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar11 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar2 = (double)FUN_013faed0();
  iVar4 = FUN_00e7d780((float)dVar2);
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = iVar4 - iVar3;
  FUN_00c8e690();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar5 = iVar4 / 10 + 1;
  if (-10 < iVar4) {
    uVar13 = 0;
    iVar14 = iVar3;
    do {
      plVar9 = (longlong *)*unaff_RSI;
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
      if (pvVar6 != (void *)0x0) {
        plVar9 = (longlong *)*unaff_RSI;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      dVar2 = (double)(**(code **)(*plVar9 + 0x380))(SUB84((double)iVar14,0));
      *(float *)(*(longlong *)(local_48 + 0x10) + uVar13 * 4) = (float)dVar2;
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 10;
    } while (uVar5 != uVar13);
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025f0d98;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  (*DAT_025f0db0)();
  uVar10 = 3;
  FUN_015c1480(DAT_023908e0,uVar5);
  plVar9 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar9 + 0x18))();
  if (iVar4 < -9) {
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    uVar13 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(local_48 + 0x10) + uVar13 * 4);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar10);
      plVar12 = plVar9;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x418))(SUB84((double)iVar3,0),(double)fVar1);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
      iVar3 = iVar3 + 10;
    } while (uVar5 != uVar13);
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (puVar8 == (undefined8 *)0x0) goto LAB_01778e5c;
  }
  FUN_00d50b20();
LAB_01778e5c:
  FUN_00d50b20();
  return unaff_RDI;
}


