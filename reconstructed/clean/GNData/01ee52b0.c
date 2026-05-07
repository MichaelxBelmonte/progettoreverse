// Function: FUN_01ee52b0
// Address: 01ee52b0
// Size: 1205 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee52b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x408))();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x420))();
  lVar2 = g_02774d50;
  plVar6 = (int64_t *)*arg1;
  if (g_02774d50 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x400))();
  lVar1 = *arg1;
  if (lVar1 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_01ee53b2;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_01ee53ad;
    }
  }
  else {
    lVar4 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_40;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01ee53ad:
      *(void*)(arg1 + 1) = 1;
LAB_01ee53b2:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01ee53c6;
    }
    *arg1 = local_40;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
  local_38 = '\0';
LAB_01ee53c6:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x408))();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar6 + 0x18))();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_00d07ad0();
  if (local_40 == 0) {
    bVar3 = true;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  lVar2 = g_027fec88;
  if (g_027fec88 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027fec90;
  if (g_027fec90 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027092b8;
  if (g_027092b8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027feca0;
  if (g_027feca0 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027648d0;
  if (g_027648d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ca5c10();
  FUN_00c91c80();
  if (!bVar3 && local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

