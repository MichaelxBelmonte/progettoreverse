// Function: FUN_01ee5e60
// Address: 01ee5e60
// Size: 512 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee5e60(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_70 = *param_2;
  local_68 = '\0';
  FUN_00d5adf0(param_1,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027fecb0;
  if (g_027fecb0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    g_028ba600 = 0;
  }
  if (g_028ba601 == '\x01') {
    FUN_00d403d0();
    local_50 = g_0270d3d8;
    if (g_0270d3d8 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    local_40 = 0;
    local_38 = '\0';
    FUN_00d40470(&local_40,&stack0xffffffffffffffd0,1,1);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x1c0);
    if (lVar1 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_00ca1340();
      }
      FUN_01efcaf0();
    }
  }
  return;
}

