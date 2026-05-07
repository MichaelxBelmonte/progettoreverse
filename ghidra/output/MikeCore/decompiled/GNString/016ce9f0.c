// Function: FUN_016ce9f0
// Address: 016ce9f0
// Size: 1177 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ce9f0(char param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  undefined8 *unaff_RDI;
  ulonglong local_40;
  char local_38;
  
  lVar1 = *param_2;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025fa538;
  uVar2 = _UNK_02393728;
  *(undefined8 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar2;
  FUN_00d500e0();
  uVar7 = *(ulonglong *)(lVar1 + 0xc);
  uVar2 = *(undefined8 *)(lVar1 + 0x14);
  *(ulonglong *)((longlong)puVar5 + 0xc) = uVar7;
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar2;
  bVar3 = 1;
  if ((*(int *)(*param_2 + 0x10) != 0) && (*(int *)(*param_2 + 0x18) != 0)) {
    bVar3 = FUN_00e7c000();
    bVar3 = bVar3 ^ 1;
    if ((bVar3 == 0) && (param_1 == '\0')) goto LAB_016cee6f;
    uVar7 = *(ulonglong *)((longlong)puVar5 + 0xc);
  }
  pVar10 = (pthread_key_t)(uVar7 >> 0x20);
  if ((uVar7 >> 0x20 == 0) || ((bVar3 ^ 1) != 0)) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar7 = FUN_00e7cc50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00e7bdb0();
    uVar9 = uVar7;
    if (((uVar7 >> 0x20 != 0) && (uVar8 >> 0x20 != 0)) && (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
      uVar9 = FUN_00e7bdb0();
    }
    *(ulonglong *)((longlong)puVar5 + 0xc) = uVar9;
    local_40 = uVar7;
  }
  uVar7 = *(ulonglong *)((longlong)puVar5 + 0x14);
  bVar3 = uVar7 >> 0x20 == 0 | bVar3 ^ 1;
  pVar10 = (pthread_key_t)CONCAT71((uint7)(uVar7 >> 0x28),bVar3);
  if (bVar3 == 0) {
LAB_016ced3c:
    FUN_00e7c280();
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar7 = FUN_00e7cc50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = FUN_00e7bdb0();
    if (((uVar7 >> 0x20 == 0) || (uVar9 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
      FUN_00e7c260();
      *(ulonglong *)((longlong)puVar5 + 0x14) = uVar7;
    }
    else {
      uVar7 = FUN_00e7bdb0();
      *(ulonglong *)((longlong)puVar5 + 0x14) = uVar7;
    }
    if (uVar7 >> 0x20 != 0) goto LAB_016ced3c;
    uVar7 = FUN_00e7bdb0();
  }
  uVar9 = *(ulonglong *)((longlong)puVar5 + 0xc);
  if (uVar9 >> 0x20 == 0) {
    uVar9 = FUN_00e7bdb0();
  }
  if (((uVar7 >> 0x20 != 0) && (uVar9 >> 0x20 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
    uVar7 = *(ulonglong *)((longlong)puVar5 + 0xc);
    if (uVar7 >> 0x20 == 0) {
      uVar7 = FUN_00e7bdb0();
    }
    uVar9 = FUN_00e7bdb0();
    if (((uVar7 >> 0x20 == 0) || (uVar9 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
      FUN_00e7c260();
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *(ulonglong *)((longlong)puVar5 + 0x14) = uVar7;
  }
LAB_016cee6f:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


