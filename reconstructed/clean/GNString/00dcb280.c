// Function: FUN_00dcb280
// Address: 00dcb280
// Size: 507 bytes
// Class: GNString
// String references:
//   "Attempted read from a non-connected socket"
//   "Read aborted"
//   "Unable to read from socket: %s"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_00dcb280(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  char cVar1;
  ssize_t sVar2;
  uint32_t extraout_var;
  int *piVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  void*local_90;
  uint32_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int local_34;
  int64_t lVar3;
  
  cVar1 = *(char *)((int64_t)this_ptr + 0x31);
  local_34 = unaff_ESI;
  lVar3 = g_02783cb0;
  while (g_02783cb0 = lVar3, cVar1 == '\0') {
    if ((char)this_ptr[6] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar3;
      FUN_00cc7b40();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x470))();
    }
    lVar3 = g_02783cb0;
    cVar1 = *(char *)((int64_t)this_ptr + 0x31);
  }
  do {
    sVar2 = _read((int)param_1,(void *)(int64_t)local_34,param_3);
    lVar3 = CONCAT44(extraout_var,sVar2);
    if (lVar3 != -1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_00dcb3ed;
    }
    piVar4 = ___error();
    lVar3 = g_02783cb8;
  } while (*piVar4 == 4);
  if (*(char *)((int64_t)this_ptr + 0x32) != '\0') {
    if (g_02783cb8 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_00cc7b40();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  piVar4 = ___error();
  lVar3 = g_02783cc0;
  if (*piVar4 == 0x23) {
    if (g_02783cc0 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    FUN_00cc7b40();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02783cc8;
  if (g_02783cc8 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar3;
  local_40 = '\x01';
  ___error();
  local_80 = FUN_00e7dfe0();
  local_88 = 1;
  local_90 = &g_026ba3d0;
  FUN_00cc7b40(&g_026ba3d0,&local_90);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_00dcb3ed:
  *(void*)((int64_t)this_ptr + 0x31) = 0;
  if (*(int *)((int64_t)this_ptr + 0x14) != -1) {
    *(void*)((int64_t)this_ptr + 0x14) = 0xffffffff;
  }
  return 0;
}

