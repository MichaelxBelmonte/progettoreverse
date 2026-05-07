// Function: FUN_016efaf0
// Address: 016efaf0
// Size: 673 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016efaf0(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  int extraout_var;
  int iVar9;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  pthread_key_t pVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  undefined4 uVar12;
  ulonglong local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    FUN_016d8ab0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    iVar9 = (int)(*(ulonglong *)(local_48 + 0xc) >> 0x20);
    if (*(ulonglong *)(local_48 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
      iVar9 = extraout_var;
    }
    uVar6 = *(ulonglong *)(local_48 + 0x14);
    pVar10 = (pthread_key_t)(uVar6 >> 0x20);
    if (uVar6 >> 0x20 == 0) {
      uVar6 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
      local_48 = uVar6;
    }
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    uVar1 = *(ulonglong *)(unaff_RDI + 0x78);
    uVar11 = uVar1;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
      uVar11 = *(ulonglong *)(unaff_RDI + 0x78);
    }
    cVar5 = *(char *)(unaff_RDI + 0x80);
    cVar4 = cVar5;
    if (uVar11 != 0) {
      FUN_00d64850();
      if (*(longlong *)(unaff_RDI + 0x78) != 0) {
        *(longlong *)(unaff_RDI + 0x78) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
      cVar4 = *(char *)(unaff_RDI + 0x80);
    }
    if (cVar4 != '\0') {
      FUN_00d64850();
      *(undefined1 *)(unaff_RDI + 0x80) = 0;
      FUN_00d64910();
    }
    if ((uVar1 == local_48) || (cVar5 != '\0')) {
      FUN_016d63b0();
    }
    else {
      FUN_00e7c280();
      if (((uVar6 >> 0x20 != 0) && (iVar9 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
        FUN_00e7c280();
      }
      FUN_00e7c260();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025fa538;
      uVar3 = _UNK_0239372c;
      uVar2 = _UNK_02393728;
      uVar12 = _UNK_02393724;
      *(undefined4 *)((longlong)puVar8 + 0xc) = _DAT_02393720;
      *(undefined4 *)(puVar8 + 2) = uVar12;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
      *(undefined4 *)(puVar8 + 3) = uVar3;
      uVar12 = FUN_00d500e0();
      FUN_016bf110(uVar12,uVar6);
      FUN_016e9c70(1,2);
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


