// Function: FUN_01289e80
// Address: 01289e80
// Size: 1287 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01289e80(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  double dVar10;
  double dVar11;
  double dVar12;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  FUN_013fb9b0();
  FUN_00b7a710();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_013fb9b0();
  dVar10 = (double)FUN_00b7a6e0();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  dVar12 = *(double *)(this_ptr + 0xf0);
  FUN_013fb9b0();
  dVar11 = (double)FUN_00b7a6e0();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((dVar12 == dVar11) && (!NAN(dVar12) && !NAN(dVar11))) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0xe0);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d23310();
  lVar4 = local_40;
  pVar7 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
  pcVar8 = local_48;
  if (local_38[0] != '\0') {
    pcVar8 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] == '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef460();
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_0128a370;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) goto LAB_0128a370;
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    pVar7 = (void*)lVar1;
  }
  FUN_013dd710();
  lVar4 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar7 = (void*)lVar1;
  }
  FUN_013dd6a0();
  lVar1 = local_40;
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar7 = (void*)lVar4;
  }
  FUN_013df480();
  lVar5 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  lVar2 = local_40;
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00d64850();
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    *(int64_t *)(this_ptr + 0x78) = 0;
    FUN_00d50b20();
  }
  FUN_00d64910();
  FUN_0125f010();
  plVar9 = *(int64_t **)(this_ptr + 0xd0);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0xd0);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 1000))(dVar10,dVar10);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123afd0();
  dVar12 = *(double *)(this_ptr + 0xf0);
  if ((dVar12 != dVar10) || (NAN(dVar12) || NAN(dVar10))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xf0) = dVar10;
    FUN_00d64910();
    dVar12 = *(double *)(this_ptr + 0xf0);
  }
  if ((*(double *)(this_ptr + 0xc0) != dVar12) ||
     (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar12))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xc0) = dVar12;
    FUN_00d64910();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0128a370:
  FUN_00d50b20();
  return;
}

