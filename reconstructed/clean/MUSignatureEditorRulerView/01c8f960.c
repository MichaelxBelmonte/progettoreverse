// Function: FUN_01c8f960
// Address: 01c8f960
// Size: 834 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8f960(uint64_t param_1)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void* pVar4;
  void* pVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((void*)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
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
  pvVar1 = _pthread_getspecific((void*)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (void*)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
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
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(g_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c350(0);
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
  dVar13 = g_0241eeb8;
  if (dVar12 <= g_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * g_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
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

