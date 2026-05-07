// Function: FUN_01f7bcc0
// Address: 01f7bcc0
// Size: 651 bytes
// Class: GNRadialColorGradient

void FUN_01f7bcc0(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar5;
  float fVar6;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  lVar2 = *(int64_t *)(*arg1 + 0x30);
  if (lVar2 == 0) {
    local_60 = 0;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    FUN_00d50b00();
    uVar1 = *(uint *)(lVar2 + 0xc);
    local_60 = lVar2;
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + uVar5 * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfd130();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  FUN_01f7c100();
  if (local_48 == 0) {
    bVar4 = true;
    uVar1 = MACH_HEADER.filetype;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = false;
    uVar1 = *(uint *)(local_48 + 0xc);
  }
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      FUN_00d459e0();
      FUN_00d46dc0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  lVar3 = *arg1;
  fVar6 = *(float *)(lVar3 + 0x40);
  if (*(int *)(*(int64_t *)(lVar3 + 0x38) + 0xc) != *(int *)(*(int64_t *)(lVar3 + 0x30) + 0xc)) {
    fVar6 = fVar6 + g_02394294;
  }
  *(float *)(this_ptr + 0x40) = fVar6;
  *(void*)(this_ptr + 0x44) = *(void*)(lVar3 + 0x44);
  if (!bVar4) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

