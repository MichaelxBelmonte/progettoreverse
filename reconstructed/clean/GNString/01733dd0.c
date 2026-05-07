// Function: FUN_01733dd0
// Address: 01733dd0
// Size: 581 bytes
// Class: GNString
// String references:
//   "_signalChangeCount"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01733dd0(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *in_RDX;
  void*arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  uint32_t uVar7;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar7 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar6 = (uint32_t)param_2;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025fdf10;
  puVar3[2] = &g_025fe2a0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(void*)(puVar3 + 9) = 0;
  FUN_00d500e0();
  puVar3[3] = *arg1;
  lVar5 = *in_RDX;
  lVar1 = puVar3[4];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    puVar3[4] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar2 = FUN_017340c0();
  puVar3[5] = uVar2;
  puVar3[6] = CONCAT44(uVar7,uVar6);
  uVar6 = 0;
  uVar7 = 0;
  uVar2 = FUN_00e7b500((int)g_023908c8);
  puVar3[7] = uVar2;
  puVar3[8] = CONCAT44(uVar7,uVar6);
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f9aa0();
  *(void*)(puVar3 + 9) = uVar6;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_50 = *in_RDX;
  local_48 = '\0';
  uVar6 = FUN_000823a0();
  lVar5 = FUN_00e85ef0(uVar6,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if (lVar5 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x28);
      goto joined_r0x01733f82;
    }
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
joined_r0x01733f82:
    if (lVar5 != 0) {
      local_38 = 0;
      FUN_00d50b00();
      goto LAB_01733f94;
    }
  }
  lVar5 = 0;
LAB_01733f94:
  local_38 = '\x01';
  local_40 = lVar5;
  FUN_00cbad30(&local_40,&local_50,4);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

