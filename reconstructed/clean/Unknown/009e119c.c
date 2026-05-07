// Function: FUN_009e119c
// Address: 009e119c
// Size: 878 bytes
// Class: Unknown
// String references:
//   "Invalid lookbehind assertion encountered in the regular expression."

void FUN_009e119c(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  void*puVar1;
  int64_t lVar2;
  uint uVar3;
  uint32_t uVar4;
  void*puVar5;
  void *pvVar6;
  void*puVar7;
  uint *arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint64_t uVar9;
  void*local_98;
  void*local_90;
  void*puStack_88;
  void*local_80;
  byte local_70;
  uint16_t uStack_6f;
  uint32_t uStack_6d;
  void*local_58;
  void*puStack_50;
  void*local_48 [2];
  uint8_t local_31;
  
  local_31 = (uint8_t)this_ptr[3];
  local_48[0] = (void*)0x0;
  local_58 = (void*)0x0;
  puStack_50 = (void*)0x0;
  if (arg1 != (uint *)0x0) {
    do {
      uVar3 = *arg1;
      puVar7 = local_90;
      if (uVar3 < 0x1d) {
        if ((0x3c60000U >> (uVar3 & 0x1f) & 1) == 0) {
          if (uVar3 == 0x1a) {
            uVar3 = FUN_009e1dbe();
            arg1[4] = uVar3;
            puVar7 = local_90;
            if ((int)uVar3 < 0) {
              lVar2 = *this_ptr;
              if (*(int *)(lVar2 + 0x2c) == 0) {
                *(void*)(lVar2 + 0x2c) = 2;
              }
              *(void*)(lVar2 + 0x38) = 0;
              *(void*)(lVar2 + 0x30) = 0;
              if ((*(byte *)(lVar2 + 0x2a) & 4) == 0) {
                FUN_009d5ed0();
                pvVar6 = (void *)0x0;
                FUN_00acde90(0,2);
                FUN_00acdf00();
                FUN_00acded0();
                puVar7 = local_90;
                if ((local_70 & 1) != 0) goto LAB_009e136f;
              }
            }
          }
          else if (uVar3 == 0x1c) {
            *(char *)(this_ptr + 3) = (char)arg1[4];
          }
        }
        else {
          lVar2 = this_ptr[3];
          if (puStack_50 < local_48[0]) {
            *puStack_50 = (char)lVar2;
            *(uint *)(puStack_50 + 1) = CONCAT13((uint8_t)uStack_6d,CONCAT21(uStack_6f,local_70))
            ;
            *(void*)(puStack_50 + 4) = uStack_6d;
            *(uint **)(puStack_50 + 8) = arg1;
            puStack_50 = puStack_50 + 0x10;
          }
          else {
            if (0xfffffffffffffff < ((int64_t)puStack_50 - (int64_t)local_58 >> 4) + 1U) {
                                  std::__vector_base_common<true>::__throw_length_error();
            }
            FUN_009e1faa(local_48);
            *puStack_88 = (char)lVar2;
            *(uint *)(puStack_88 + 1) = CONCAT13((uint8_t)uStack_6d,CONCAT21(uStack_6f,local_70))
            ;
            *(void*)(puStack_88 + 4) = uStack_6d;
            *(uint **)(puStack_88 + 8) = arg1;
            puVar5 = puStack_88 + 0x10;
            puVar7 = puStack_50 + -(int64_t)local_58;
            local_90 = local_90 + -(int64_t)puVar7;
            if (0 < (int64_t)puVar7) {
              puStack_88 = puVar5;
              _memcpy(puVar5,puVar7,(size_t)param_3);
              puVar5 = puStack_88;
            }
            puVar7 = local_48[0];
            local_48[0] = local_80;
            local_80 = puVar7;
            pvVar6 = (void *)0x0;
            puStack_88 = puStack_50;
            if ((int64_t)puStack_50 - (int64_t)local_58 != 0) {
              pvVar6 = (void *)(~(((int64_t)puStack_50 - (int64_t)local_58) - 0x10U >> 4) * 0x10);
              puStack_88 = puStack_50 + (int64_t)pvVar6;
            }
            bVar8 = local_58 != (void*)0x0;
            local_98 = local_58;
            puVar7 = local_58;
            local_58 = local_90;
            puStack_50 = puVar5;
            if (bVar8) {
LAB_009e136f:
              local_90 = puVar7;
              operator_delete(pvVar6);
              puVar7 = local_90;
            }
          }
        }
      }
      local_90 = puVar7;
      arg1 = *(uint **)(arg1 + 2);
    } while (arg1 != (uint *)0x0);
    puVar7 = puStack_50;
    if (puStack_50 != local_58) {
      do {
        if ((char)this_ptr[6] != '\0') {
          local_98 = (void*)((uint64_t)local_98 & 0xffffffffffffff00);
          FUN_009b0b28(puStack_50,&local_98);
        }
        *(void*)(this_ptr + 3) = puStack_50[-0x10];
        puVar1 = *(void**)(puStack_50 + -8);
        puStack_50 = puStack_50 + -0x10;
        this_ptr[5] = 0;
        uVar9 = FUN_009e156a(puVar1 + 0x46,puVar1 + 6,1);
        this_ptr[5] = 0;
        if ((char)this_ptr[6] != '\0') {
          local_98 = (void*)((uint64_t)local_98 & 0xffffffffffffff00);
          FUN_009b0b28(uVar9,&local_98);
        }
        FUN_009e156a(puVar1 + 0x46,puVar1 + 6,2);
        uVar4 = FUN_009e1f4c();
        *puVar1 = uVar4;
        puVar7 = puStack_50;
      } while (puStack_50 != local_58);
    }
    *(void*)(this_ptr + 3) = local_31;
    if (local_58 != (void*)0x0) {
      puStack_50 = local_58;
      operator_delete(puVar7);
    }
  }
  return;
}

