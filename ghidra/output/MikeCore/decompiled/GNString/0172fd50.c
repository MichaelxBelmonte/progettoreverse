// Function: FUN_0172fd50
// Address: 0172fd50
// Size: 1413 bytes
// Class: GNString


void FUN_0172fd50(pthread_key_t param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  pthread_key_t pVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  ulonglong local_50;
  ulonglong local_48;
  char local_40;
  char local_31;
  ulonglong uVar12;
  
  lVar1 = *unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01822e80();
  uVar3 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar15 = FUN_0176f850();
  *(undefined4 *)(unaff_RDI + 0xc) = uVar15;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_017702f0();
  iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
  iVar5 = ((iVar5 >> 0x1f & 0xcU) + iVar5) * 7;
  iVar5 = iVar5 + ((int)(short)iVar5 / 0xc) * -0xc;
  cVar4 = ((byte)((uint)(int)(short)iVar5 >> 0xf) & 0xc) + (char)iVar5 + '\x06';
  uVar9 = cVar4 * 0x2b;
  cVar4 = cVar4 + ((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * -0xc;
  uVar10 = (uint)(char)(cVar4 + -6);
  uVar12 = (ulonglong)uVar10;
  uVar9 = uVar10 + 0xc;
  if (-1 < cVar4) {
    uVar9 = uVar10;
  }
  *(uint *)(unaff_RDI + 0x10) = uVar9;
  local_50 = uVar3;
  FUN_0176f970();
  uVar3 = local_48;
  if (((local_40 == '\0') && (local_48 != 0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01774240(*(undefined4 *)(unaff_RDI + 0xc));
  lVar13 = 0;
  do {
    pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      uVar12 = local_50;
    }
    fVar16 = (float)FUN_01773fe0();
    pvVar6 = _pthread_getspecific((pthread_key_t)uVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar17 = (float)FUN_01774c90();
    pVar11 = (pthread_key_t)uVar12;
    *(float *)(unaff_RDI + 0x14 + lVar13 * 4) = fVar16 - fVar17;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0xc);
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    *(undefined8 *)(unaff_RDI + 0x50) = 0;
    FUN_00d50b20();
  }
  uVar12 = local_50;
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770c90();
  if (local_48 == 0) {
    bVar14 = false;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01770c90();
    iVar5 = FUN_00d8c7a0();
    bVar14 = iVar5 != 0;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar14) goto LAB_01730280;
  FUN_016ab300();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar15 = FUN_01770c90();
  local_58 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      uVar15 = FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_80;
  uVar15 = FUN_016ac280(uVar15,&local_60);
  FUN_00d8cf90(uVar15,6);
  uVar2 = *(ulonglong *)(unaff_RDI + 0x50);
  uVar8 = uVar2;
  if (uVar2 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        uVar8 = 0;
        goto LAB_017301d8;
      }
      FUN_00d50b00();
      uVar2 = *(ulonglong *)(unaff_RDI + 0x50);
      *(ulonglong *)(unaff_RDI + 0x50) = local_48;
      uVar8 = local_48;
    }
    else {
      local_40 = '\0';
      uVar8 = local_48;
LAB_017301d8:
      *(ulonglong *)(unaff_RDI + 0x50) = uVar8;
    }
    if (uVar2 != 0) {
      FUN_00d50b20();
      uVar8 = local_48;
    }
  }
  if ((local_40 != '\0') && (uVar8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
LAB_01730280:
  if (*(longlong *)(unaff_RDI + 0x50) == 0) {
    *(undefined8 *)(unaff_RDI + 0x44) = 0;
  }
  else {
    *(undefined8 *)(unaff_RDI + 0x44) = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
  }
  if (uVar3 != 0) {
    FUN_00d50b20();
  }
  if (uVar12 != 0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}


