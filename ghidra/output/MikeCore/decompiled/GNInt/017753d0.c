// Function: FUN_017753d0
// Address: 017753d0
// Size: 1184 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x01775783) */
/* WARNING: Removing unreachable block (ram,0x0177578c) */
/* WARNING: Removing unreachable block (ram,0x01775711) */
/* WARNING: Removing unreachable block (ram,0x0177571a) */
/* WARNING: Removing unreachable block (ram,0x017757f5) */
/* WARNING: Removing unreachable block (ram,0x017757fe) */

undefined8 * FUN_017753d0(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  pthread_key_t pVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  int *piVar10;
  
  piVar10 = param_1;
  FUN_01774750();
  pVar8 = (pthread_key_t)piVar10;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01779f30();
  iVar3 = iVar3 + *(int *)(unaff_RSI + 100);
  iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
  iVar4 = iVar3 + 0xc;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *param_1 = iVar4;
  iVar3 = FUN_01775a80();
  iVar3 = iVar3 + *(int *)(unaff_RSI + 100);
  iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
  iVar4 = iVar3 + 0xc;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  uVar9 = (char)((char)iVar4 + -1) * 0x2b;
  FUN_01774750((uint)(byte)((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * 0xc,param_2 + 1)
  ;
  pVar8 = ((iVar4 + 1U & 0xff) / 3 & 0xfffffffc) * 3;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_017755cd;
    FUN_00d50b00();
LAB_01775546:
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01779f30();
    iVar4 = iVar4 + *(int *)(unaff_RSI + 100);
    pVar5 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    pVar8 = pVar5 + 0xc;
    if (-1 < (int)pVar5) {
      pVar8 = pVar5;
    }
    bVar2 = false;
  }
  else {
    if (local_40 != 0) goto LAB_01775546;
LAB_017755cd:
    bVar2 = true;
  }
  FUN_01774750(pVar8,param_2 + -1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01775611;
    }
  }
  else if (local_40 != 0) {
LAB_01775611:
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f30();
    bVar1 = false;
    goto LAB_017756a0;
  }
  bVar1 = true;
LAB_017756a0:
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


