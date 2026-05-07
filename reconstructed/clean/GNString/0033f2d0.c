// Function: FUN_0033f2d0
// Address: 0033f2d0
// Size: 1618 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0033f2d0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  int64_t local_f0;
  int64_t local_e8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = (**(code **)(&UNK_000018a8 + *this_ptr))();
  if ((cVar3 != '\0') && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) {
    do {
      (**(code **)(*this_ptr + 0x658))();
      plVar5 = local_80;
      plVar8 = (int64_t *)*arg1;
      if (plVar8 == local_80) {
        if (((char)arg1[1] == '\0') && (local_80 != (int64_t *)0x0)) {
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_0033f49c;
          }
LAB_0033f452:
          *(void*)(arg1 + 1) = 1;
          local_78._0_1_ = '\0';
        }
        lVar1 = *arg1;
      }
      else {
        lVar1 = arg1[1];
        if ((char)local_78 != '\0') {
          *arg1 = (int64_t)local_80;
          if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0033f452;
        }
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar5;
        if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0033f49c:
        *(void*)(arg1 + 1) = 1;
        lVar1 = *arg1;
      }
      if (lVar1 == 0) {
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0033f4e5;
      }
      iVar4 = FUN_01d3a5a0();
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar4 == 6) {
LAB_0033f4e5:
        (**(code **)(&UNK_000018a0 + *this_ptr))();
        (**(code **)(&UNK_000018b0 + *this_ptr))();
        return;
      }
    } while( true );
  }
  iVar4 = FUN_01d3a5a0();
  if (((iVar4 != 1) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) || (iVar4 = FUN_01d3b620(), iVar4 != 2)
     ) goto LAB_0033f6c8;
  FUN_01d3abf0();
  local_e8 = FUN_01e466c0();
  (**(code **)(*this_ptr + 0xb28))();
  plVar8 = local_80;
  if ((((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), (char)local_78 != '\0' && (local_80 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_000016c8 + *this_ptr))((uint32_t)local_e8);
  if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0033f6b3:
    FUN_00d50b20();
  }
  else {
    if ((plVar8 != (int64_t *)0x0) && (local_80 == (int64_t *)0x0)) {
      FUN_00d23310();
      plVar8 = &local_78;
      local_a8 = CONCAT71(local_a8._1_7_,(char)local_78);
      plVar5 = &local_a8;
      if ((char)local_78 != '\0') {
        plVar5 = plVar8;
      }
      *(void*)plVar5 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)plVar8;
      (**(code **)(*local_80 + 0x928))();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_a8 != '\0') {
        FUN_00d50b20();
      }
      local_e8 = lVar1;
      FUN_00d403d0();
      local_d8 = g_02702d30;
      if (g_02702d30 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      lVar2 = g_02702d38;
      if (g_02702d38 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_f0 = lVar2;
      FUN_00083ea0(2,&local_f0);
      FUN_000b4da0();
      local_98 = 0;
      local_a0 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      lVar1 = local_e8;
      local_98 = '\x01';
      FUN_00d40470(&local_a0,&stack0xffffffffffffff48,1,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (int64_t *)&g_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &g_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar8 = local_80;
      plVar5 = &local_78;
      if ((char)local_78 == '\0') {
        plVar5 = (int64_t *)&local_50;
      }
      local_50 = (char)local_78;
      *(void*)plVar5 = 0;
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar9 = (**(code **)(*plVar8 + 0x928))();
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      (**(code **)(*this_ptr + 0xda8))(uVar9,1);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    if (local_80 != (int64_t *)0x0) goto LAB_0033f6b3;
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0033f6c8:
  local_c8 = *arg1;
  local_c0 = '\0';
  FUN_01940080();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

