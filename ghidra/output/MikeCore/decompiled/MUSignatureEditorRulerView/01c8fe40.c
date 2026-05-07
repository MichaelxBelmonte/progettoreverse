// Function: FUN_01c8fe40
// Address: 01c8fe40
// Size: 887 bytes
// Class: MUSignatureEditorRulerView


/* WARNING: Removing unreachable block (ram,0x01c90011) */
/* WARNING: Removing unreachable block (ram,0x01c9001a) */
/* WARNING: Removing unreachable block (ram,0x01c900f6) */
/* WARNING: Removing unreachable block (ram,0x01c900ff) */
/* WARNING: Removing unreachable block (ram,0x01c8feb5) */
/* WARNING: Removing unreachable block (ram,0x01c8febe) */
/* WARNING: Removing unreachable block (ram,0x01c8ff28) */
/* WARNING: Removing unreachable block (ram,0x01c8ff31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8fe40(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    lVar8 = 0;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  uVar2 = uVar6;
  pvVar1 = _pthread_getspecific((pthread_key_t)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    lVar10 = 0;
  }
  else {
    lVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      pVar4 = 0;
    }
    else {
      pVar4 = 0;
    }
  }
  pVar5 = pVar4;
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_012ebfe0();
  pvVar1 = _pthread_getspecific(pVar5);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_012ebd30();
  uVar2 = FUN_00aea410(dVar12,2);
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(DAT_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c4c0(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x690))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00da6e20();
  dVar13 = _DAT_0241eeb8;
  if (dVar12 <= _DAT_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * DAT_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
  FUN_00da6fa0();
  (**(code **)(*plVar3 + 0x370))();
  FUN_00d50b20();
  if ((char)pVar4 == '\0' && lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}


