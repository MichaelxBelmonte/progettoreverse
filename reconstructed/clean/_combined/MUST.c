// ===================================================================
// MUST — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00e5a7d0
// ============================================================
// Function: FUN_00e5a7d0
// Address: 00e5a7d0
// Size: 1480 bytes
// Class: MUST
// String references:
//   "error while decoding list, '%@' not found"

void FUN_00e5a7d0(void)

{
  void*puVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  uint *puVar5;
  int64_t this_ptr;
  bool bVar6;
  int local_7c;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint local_60 [2];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  if ((char)local_60[0] == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_60[0] != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_60[0] = local_60[0] & 0xffffff00;
  iVar3 = FUN_00e3a2a0();
  if (((char)local_60[0] != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (iVar3 == -1) {
    local_40 = (int64_t)local_68;
    FUN_00d4efa0();
    FUN_00c82260();
    if ((char)local_60[0] == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_60[0] != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60[0] = local_60[0] & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == (void*)0x0) goto LAB_00e5ace4;
    local_60[0] = local_60[0] & 0xffffff00;
    local_58 = (int64_t)local_68;
    local_50 = 0xffffffff;
    local_48 = 0;
    while( true ) {
      lVar4 = (int64_t)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)(local_58 + 0xc) <= iVar3) break;
      local_78 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
      iVar3 = FUN_00e3a2a0();
      if (iVar3 != -1) {
        if (local_40 != local_78) {
          if ((char)local_60[0] == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
            bVar6 = local_40 != 0;
            local_40 = local_78;
            if (bVar6) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40 != 0) {
              local_40 = local_78;
              FUN_00d50b20();
            }
            local_60[0] = local_60[0] & 0xffffff00;
            local_40 = local_78;
          }
        }
        goto LAB_00e5ad89;
      }
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
    }
    iVar3 = -1;
LAB_00e5ad89:
    FUN_00018280();
    FUN_00d50b20();
    local_68 = (void*)local_40;
    if (iVar3 == -1) goto LAB_00e5ace4;
  }
  puVar1 = *(void**)(*(int64_t *)(this_ptr + 0xa8) + 0x18);
  local_40 = (int64_t)local_68;
  if (puVar1 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_60[0] = CONCAT31(local_60[0]._1_3_,1);
  iVar3 = FUN_00e5d7f0();
  if (((char)local_60[0] != '\0') && (puVar1 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = g_027815a8;
  if (iVar3 == -1) {
    if (g_027815a8 != 0) {
      FUN_00d50b00();
    }
    local_60[0] = 1;
    local_50 = local_50 & 0xffffffffffffff00;
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_50 = CONCAT71(local_50._1_7_,1);
    local_58 = (int64_t)local_68;
    FUN_00cc7b40();
    local_68 = &g_024c5048;
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    puVar1 = local_68;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  local_68 = puVar1;
  FUN_00dac5e0();
  FUN_00dab510();
  FUN_00d21370();
  bVar2 = FUN_00d24990();
  if (0 < (int)local_78) {
    if (bVar2 == 0) {
      iVar3 = 0;
      do {
        FUN_00dab510();
        if (local_7c != -1) {
          FUN_00e579d0();
          local_38[0] = (char)local_60[0];
          puVar5 = local_60;
          if ((char)local_60[0] == '\0') {
            puVar5 = (uint *)local_38;
          }
          *(void*)puVar5 = 0;
          if (((char)local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_68 != (void*)0x0) {
            FUN_00d21140();
          }
          if ((local_38[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_78);
    }
    else {
      iVar3 = 0;
      do {
        FUN_00dab510();
        if (local_7c == -1) {
          FUN_00d21140();
        }
        else {
          FUN_00e579d0();
          local_38[0] = (char)local_60[0];
          puVar5 = local_60;
          if ((char)local_60[0] == '\0') {
            puVar5 = (uint *)local_38;
          }
          *(void*)puVar5 = 0;
          if (((char)local_60[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 == (void*)0x0 & (bVar2 ^ 1)) == 0) {
            FUN_00d21140();
          }
          if ((local_38[0] != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_78);
    }
  }
LAB_00e5ace4:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e5a070
// ============================================================
// Function: FUN_00e5a070
// Address: 00e5a070
// Size: 673 bytes
// Class: MUST
// String references:
//   "object of unknown class '%@' is being referred to during unarchiving. This MUST be dealt with in un...

void FUN_00e5a070(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  char cVar5;
  void*puVar6;
  char *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint32_t local_74;
  void*local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int local_3c;
  char local_38 [8];
  
  cVar5 = FUN_00e58720();
  if ((cVar5 == '\0') || (FUN_00dab510(), local_3c == -1)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00e579d0();
  puVar4 = local_70;
  pcVar7 = local_38;
  if (local_68[0] != '\0') {
    pcVar7 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar7 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 == g_028a8c48) {
    lVar1 = *(int64_t *)
             (*(int64_t *)(arg1[0xb] + 0x10) +
             (int64_t)*(int *)(*(int64_t *)(arg1[0xe] + 0x10) + (int64_t)local_3c * 4) * 8);
    local_74 = (**(code **)(*arg1 + 0x598))();
    lVar3 = g_027815a8;
    plVar2 = (int64_t *)arg1[0x16];
    if (plVar2 == (int64_t *)0x0) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar3;
      local_80 = '\x01';
      local_68[0] = '\x01';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_70 = &g_024c5048;
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      FUN_00cc7b40();
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      local_90 = '\0';
      local_98 = lVar1;
      (**(code **)(*plVar2 + 0x30))(local_74,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (puVar4 != (void*)0x0) {
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      puVar6 = (void*)0x0;
      goto LAB_00e5a2f4;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar6 = puVar4;
  if ((local_38[0] == '\0') && (puVar6 = (void*)0x0, puVar4 != (void*)0x0)) {
    FUN_00d50b00();
    puVar6 = puVar4;
  }
LAB_00e5a2f4:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

