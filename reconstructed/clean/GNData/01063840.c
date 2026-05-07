// Function: FUN_01063840
// Address: 01063840
// Size: 548 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_01063840(void *param_1,void*param_2,size_t param_3,uchar *param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t this_ptr;
  void*puVar7;
  segment_command *psVar8;
  size_t local_6c;
  uint64_t local_68;
  uint64_t uStackY_60;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint64_t local_48;
  uint64_t uStack_40;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((arg1 != (void*)0x0) && (param_2 != (void*)0x0)) {
    if ((*(int64_t *)(this_ptr + 0x70) != 0) &&
       (puVar7 = (void*)(0x10 - *(int64_t *)(this_ptr + 0x70)), puVar7 <= param_2)) {
      _memcpy(param_1,puVar7,param_3);
      uVar6 = *(void*)(this_ptr + 0x60);
      uVar2 = *(void*)(this_ptr + 0x68);
      psVar8 = &segment_command_00000020;
      if (*(int64_t *)(this_ptr + 0x28) != 0x10) {
        local_48 = *(void*)(this_ptr + 0x60);
        uStack_40 = *(void*)(this_ptr + 0x68);
        psVar8 = (segment_command *)(segment_command_00000020.segname + 8);
      }
      local_6c = 0x10;
      local_68._0_4_ = (uint)uVar6;
      local_68._4_4_ = (uint)((uint64_t)uVar6 >> 0x20);
      uStackY_60._0_4_ = (uint)uVar2;
      uStackY_60._4_4_ = (uint)((uint64_t)uVar2 >> 0x20);
      *(uint *)(this_ptr + 0x78) = *(uint *)(this_ptr + 0x78) ^ (uint)local_68;
      *(uint *)(this_ptr + 0x7c) = *(uint *)(this_ptr + 0x7c) ^ local_68._4_4_;
      *(uint *)(this_ptr + 0x80) = *(uint *)(this_ptr + 0x80) ^ (uint)uStackY_60;
      *(uint *)(this_ptr + 0x84) = *(uint *)(this_ptr + 0x84) ^ uStackY_60._4_4_;
      uVar5 = (uint)*(void*)(this_ptr + 0x60);
      uStack_54 = (uint)((uint64_t)*(void*)(this_ptr + 0x60) >> 0x20);
      uStack_50 = (uint)*(void*)(this_ptr + 0x68);
      uStack_4c = (uint)((uint64_t)*(void*)(this_ptr + 0x68) >> 0x20);
      *(uint *)(this_ptr + 0x88) = *(uint *)(this_ptr + 0x88) ^ uVar5;
      *(uint *)(this_ptr + 0x8c) = *(uint *)(this_ptr + 0x8c) ^ uStack_54;
      *(uint *)(this_ptr + 0x90) = *(uint *)(this_ptr + 0x90) ^ uStack_50;
      *(uint *)(this_ptr + 0x94) = *(uint *)(this_ptr + 0x94) ^ uStack_4c;
      if (*(int64_t *)(this_ptr + 0x28) != 0x10) {
        *(uint *)(this_ptr + 0x98) = *(uint *)(this_ptr + 0x98) ^ (uint)local_48;
        *(uint *)(this_ptr + 0x9c) = *(uint *)(this_ptr + 0x9c) ^ local_48._4_4_;
        *(uint *)(this_ptr + 0xa0) = *(uint *)(this_ptr + 0xa0) ^ (uint)uStack_40;
        *(uint *)(this_ptr + 0xa4) = *(uint *)(this_ptr + 0xa4) ^ uStack_40._4_4_;
      }
      param_3 = (size_t)psVar8;
      local_68 = uVar6;
      uStackY_60 = uVar2;
      uVar5 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(this_ptr + 0x78),(uchar *)&local_6c,
                                (int *)psVar8,param_4,uVar5);
      param_1 = (void *)(uint64_t)uVar5;
      uVar6 = 0;
      if ((uVar5 == 0) || (local_6c != (size_t)psVar8)) goto LAB_01063a40;
      *(void*)(this_ptr + 0x70) = 0;
      param_2 = param_2 + -(int64_t)puVar7;
      arg1 = (void*)((int64_t)arg1 + (int64_t)puVar7);
    }
    if ((void*)((int64_t)&MACH_HEADER.filetype + 3) < param_2) {
      do {
        uVar6 = *arg1;
        uVar2 = arg1[1];
        uVar3 = *arg1;
        uVar4 = arg1[1];
        psVar8 = &segment_command_00000020;
        if (*(int64_t *)(this_ptr + 0x28) != 0x10) {
          local_48 = *arg1;
          uStack_40 = arg1[1];
          psVar8 = (segment_command *)(segment_command_00000020.segname + 8);
        }
        local_6c = 0x10;
        local_68._0_4_ = (uint)uVar6;
        local_68._4_4_ = (uint)((uint64_t)uVar6 >> 0x20);
        uStackY_60._0_4_ = (uint)uVar2;
        uStackY_60._4_4_ = (uint)((uint64_t)uVar2 >> 0x20);
        *(uint *)(this_ptr + 0x78) = *(uint *)(this_ptr + 0x78) ^ (uint)local_68;
        *(uint *)(this_ptr + 0x7c) = *(uint *)(this_ptr + 0x7c) ^ local_68._4_4_;
        *(uint *)(this_ptr + 0x80) = *(uint *)(this_ptr + 0x80) ^ (uint)uStackY_60;
        *(uint *)(this_ptr + 0x84) = *(uint *)(this_ptr + 0x84) ^ uStackY_60._4_4_;
        uVar5 = (uint)uVar3;
        uStack_54 = (uint)((uint64_t)uVar3 >> 0x20);
        uStack_50 = (uint)uVar4;
        uStack_4c = (uint)((uint64_t)uVar4 >> 0x20);
        *(uint *)(this_ptr + 0x88) = *(uint *)(this_ptr + 0x88) ^ uVar5;
        *(uint *)(this_ptr + 0x8c) = *(uint *)(this_ptr + 0x8c) ^ uStack_54;
        *(uint *)(this_ptr + 0x90) = *(uint *)(this_ptr + 0x90) ^ uStack_50;
        *(uint *)(this_ptr + 0x94) = *(uint *)(this_ptr + 0x94) ^ uStack_4c;
        if (*(int64_t *)(this_ptr + 0x28) != 0x10) {
          *(uint *)(this_ptr + 0x98) = *(uint *)(this_ptr + 0x98) ^ (uint)local_48;
          *(uint *)(this_ptr + 0x9c) = *(uint *)(this_ptr + 0x9c) ^ local_48._4_4_;
          *(uint *)(this_ptr + 0xa0) = *(uint *)(this_ptr + 0xa0) ^ (uint)uStack_40;
          *(uint *)(this_ptr + 0xa4) = *(uint *)(this_ptr + 0xa4) ^ uStack_40._4_4_;
        }
        param_3 = (size_t)psVar8;
        local_68 = uVar6;
        uStackY_60 = uVar2;
        uVar5 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(this_ptr + 0x78),(uchar *)&local_6c,
                                  (int *)psVar8,param_4,uVar5);
        param_1 = (void *)(uint64_t)uVar5;
        uVar6 = 0;
        if ((uVar5 == 0) || (local_6c != (size_t)psVar8)) goto LAB_01063a40;
        arg1 = arg1 + 2;
        param_2 = param_2 + -0x10;
      } while ((void*)((int64_t)&MACH_HEADER.filetype + 3) < param_2);
    }
    if (param_2 != (void*)0x0) {
      _memcpy(param_1,param_2,param_3);
      *(int64_t *)(this_ptr + 0x70) = (int64_t)(param_2 + *(int64_t *)(this_ptr + 0x70));
    }
  }
  uVar6 = 1;
LAB_01063a40:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar6;
  }
                      ___stack_chk_fail();
}

