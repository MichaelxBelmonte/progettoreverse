// Function: FUN_00e93080
// Address: 00e93080
// Size: 1192 bytes
// Class: GNString
// String references:
//   "com.celemony.gnhttprequest.httpStatus.%I"
//   "http status code: %I"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00e93080(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar5;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00e97840();
    lVar4 = *arg1;
    if (lVar4 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00e9315b;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00e93151;
      }
LAB_00e93116:
      local_48 = arg1 + 1;
      *(void*)local_48 = 1;
    }
    else {
      lVar3 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = local_40;
        if (((char)lVar3 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e93116;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_40;
      if (((char)lVar3 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_00e93151:
      local_48 = arg1 + 1;
      *(void*)local_48 = 1;
LAB_00e9315b:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e97870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      lVar4 = *param_2;
      FUN_00e97870();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_40 = local_58;
      local_38 = '\0';
      FUN_00d235a0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e97f30();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if (local_40 != 0) {
      FUN_00e97f30();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      local_38 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
  }
  iVar1 = *(int *)(this_ptr + 0x28);
  if ((iVar1 == 0) || (iVar1 == 200)) goto LAB_00e93476;
  FUN_00d05a80();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e93313;
    }
LAB_00e93374:
    bVar2 = true;
    local_48._0_1_ = '\0';
    local_60 = 0;
    if (2 < iVar1 - 0x1f6U) goto LAB_00e933e8;
LAB_00e933ac:
    lVar4 = g_02789560;
    if (g_02789560 != 0) {
      FUN_00d50b00();
      if (local_40 != lVar4) goto LAB_00e933db;
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_00e933e8;
    }
    if (local_40 != 0) {
LAB_00e933db:
      if (!bVar2) {
        FUN_00d50b20();
      }
      goto LAB_00e933e8;
    }
LAB_00e934bb:
    FUN_00d8cb40();
    if (local_40 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (local_40 == 0) goto LAB_00e93374;
LAB_00e93313:
    FUN_00d8cb40();
    local_60 = local_40;
    if (local_40 == 0) {
      local_48._0_1_ = '\0';
    }
    else {
      local_48._0_1_ = '\x01';
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    if (iVar1 - 0x1f6U < 3) goto LAB_00e933ac;
LAB_00e933e8:
    if (lVar4 == 0) goto LAB_00e934bb;
  }
  if ((*arg1 == 0) && (local_60 != 0)) {
    if (((char)local_48 != '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    *arg1 = local_60;
    *(char *)(arg1 + 1) = (char)local_48;
  }
  FUN_00d235a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  if (((char)local_48 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_00e93476:
  return uVar5 & 0xffffffff;
}

