// Function: FUN_01b468c0
// Address: 01b468c0
// Size: 1465 bytes
// Class: MUScaleStretchTuningCtrl


/* WARNING: Removing unreachable block (ram,0x01b46bb9) */
/* WARNING: Removing unreachable block (ram,0x01b46bc5) */
/* WARNING: Removing unreachable block (ram,0x01b46e5d) */
/* WARNING: Removing unreachable block (ram,0x01b46e6d) */
/* WARNING: Removing unreachable block (ram,0x01b46c03) */
/* WARNING: Removing unreachable block (ram,0x01b46c0f) */
/* WARNING: Removing unreachable block (ram,0x01b46d58) */
/* WARNING: Removing unreachable block (ram,0x01b46d65) */
/* WARNING: Removing unreachable block (ram,0x01b46952) */
/* WARNING: Removing unreachable block (ram,0x01b4695b) */
/* WARNING: Removing unreachable block (ram,0x01b46d8a) */
/* WARNING: Removing unreachable block (ram,0x01b46d97) */

undefined8 * FUN_01b468c0(float param_1,float param_2,float param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  longlong *plVar12;
  longlong *local_48;
  char local_40;
  
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)param_1;
  iVar7 = FUN_013f3690();
  lVar9 = local_48[2];
  lVar1 = *(longlong *)(lVar9 + (longlong)iVar7 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar9 = local_48[2];
  }
  lVar9 = *(longlong *)(lVar9 + 8 + (longlong)iVar7 * 8);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_ECX = (pthread_key_t)lVar1;
  }
  dVar2 = (double)FUN_013faed0();
  bVar4 = true;
  if ((double)param_3 < dVar3 - dVar2) {
    pvVar8 = _pthread_getspecific(in_ECX);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      in_ECX = (pthread_key_t)lVar9;
    }
    dVar2 = (double)FUN_013faed0();
    if ((double)param_3 < dVar2 - dVar3) {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      in_ECX = 0x25ddb28;
      *puVar11 = &DAT_025ddb28;
      puVar11[0xb] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x43) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x4b) = 0;
      (*DAT_025ddb40)();
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013fae90(SUB84(dVar3,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faee0(SUB84((double)param_2,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2cf0();
      bVar4 = false;
      bVar5 = true;
      goto LAB_01b46b7d;
    }
  }
  bVar5 = false;
  puVar11 = (undefined8 *)0x0;
LAB_01b46b7d:
  FUN_01778a40();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01778fe0();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  plVar12 = local_48;
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  cVar6 = (**(code **)(*plVar12 + 0x370))();
  if (cVar6 == '\0') {
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f3080();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((bVar4) && (puVar11 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = puVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar5 = false;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (puVar11 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


