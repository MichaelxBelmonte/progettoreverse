// Function: FUN_00e633c0
// Address: 00e633c0
// Size: 1298 bytes
// Class: GNString
// String references:
//   "%s"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e633c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  
  FUN_00d50100();
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_00d41430(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  *(int64_t **)(this_ptr + 0x28) = plVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00003040();
  FUN_00d8cb40();
  lVar1 = g_02787830;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
    lVar1 = g_02787830;
  }
  g_02787830 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00003050();
  FUN_00d8cb40();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027d2068;
  if (g_027d2068 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d8cb40();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_02787840;
  if (g_02787840 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00dd16c0();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02787848;
  if (g_02787848 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000468f0();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  *(int64_t **)(this_ptr + 0x30) = plVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00e36990();
  return;
}

