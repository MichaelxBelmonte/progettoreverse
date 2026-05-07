// Function: FUN_0102d010
// Address: 0102d010
// Size: 1979 bytes
// Class: Unknown

uint64_t FUN_0102d010(uint32_t param_1,int64_t param_2,size_t param_3)

{
  void*puVar1;
  void*puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  void*puVar7;
  void*in_RCX;
  size_t len;
  void*arg1;
  int64_t this_ptr;
  size_t len_00;
  uint64_t uVar8;
  void*puVar9;
  bool bVar10;
  uint32_t uVar11;
  uint32_t local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint32_t local_118 [56];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar1 = *(void**)(this_ptr + 0x78);
  puVar2 = *(void**)(puVar1 + 200);
  if (*(int *)(puVar1 + 0xbc) == 0) {
    if ((puVar2 != (void*)0xffffffffffffffff) && (arg1 != (void*)0x0)) {
      uVar8 = 0xffffffff;
      if (puVar2 + 0x10 == in_RCX) {
        len_00 = (int)puVar1 + 0x20;
        *(void*)(puVar1 + 0x20) = 0;
        puVar9 = puVar1;
        if (section_000000b8.sectname + 8 < puVar2) {
          _ChaCha20_ctr32(puVar1,0x40);
          uVar11 = _Poly1305_Init();
          *(void*)(puVar1 + 0x20) = 1;
          *(void*)(puVar1 + 0x70) = 0;
          uVar11 = _Poly1305_Update(uVar11,0x10);
          *(void*)(puVar1 + 0xa8) = 0xd;
          *(void**)(puVar1 + 0xb0) = puVar2;
          if (*(int *)(this_ptr + 0x10) == 0) {
            _Poly1305_Update(uVar11,puVar2);
            uVar11 = _ChaCha20_ctr32(puVar1,puVar2);
          }
          else {
            uVar11 = _ChaCha20_ctr32(puVar1,puVar2);
            uVar11 = _Poly1305_Update(uVar11,puVar2);
          }
          arg1 = (void*)((int64_t)arg1 + (int64_t)puVar2);
          _Poly1305_Update(uVar11,-(int)puVar2 & 0xf);
          len = 0x10;
          puVar7 = local_118;
        }
        else {
          _ChaCha20_ctr32();
          _Poly1305_Init();
          *(void*)(puVar1 + 0x70) = 0;
          local_128 = *(void*)(puVar1 + 0x94);
          uStack_124 = *(void*)(puVar1 + 0x98);
          uStack_120 = *(void*)(puVar1 + 0x9c);
          uStack_11c = *(void*)(puVar1 + 0xa0);
          *(void*)(puVar1 + 0xa8) = 0xd;
          *(void**)(puVar1 + 0xb0) = puVar2;
          if (puVar2 == (void*)0x0) {
            len = 0x20;
            puVar7 = local_118;
          }
          else {
            puVar9 = puVar2;
            if (*(int *)(this_ptr + 0x10) == 0) {
              puVar7 = (void*)_xor128_decrypt_n_pad(puVar2,local_118);
            }
            else {
              puVar7 = (void*)_xor128_encrypt_n_pad(puVar2,local_118);
            }
            arg1 = (void*)((int64_t)arg1 + (int64_t)puVar2);
            len = ((int)puVar7 - (int)&local_128) + 0x10;
          }
        }
        uVar11 = *(void*)(puVar1 + 0xac);
        uVar3 = *(void*)(puVar1 + 0xb0);
        uVar4 = *(void*)(puVar1 + 0xb4);
        *puVar7 = *(void*)(puVar1 + 0xa8);
        puVar7[1] = uVar11;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        _Poly1305_Update();
        _OPENSSL_cleanse(puVar9,len);
        _Poly1305_Final();
        *(void*)(puVar1 + 200) = 0xffffffffffffffff;
        if (*(int *)(this_ptr + 0x10) == 0) {
          iVar6 = _CRYPTO_memcmp(puVar9,&MACH_HEADER.ncmds,len_00);
          if (iVar6 != 0) {
            ___bzero();
            goto LAB_0102d4dd;
          }
        }
        else {
          uVar5 = *(void*)(puVar1 + 0x8c);
          *arg1 = *(void*)(puVar1 + 0x84);
          arg1[1] = uVar5;
        }
        uVar8 = (uint64_t)in_RCX & 0xffffffff;
      }
      goto LAB_0102d4dd;
    }
    param_3 = (int)puVar1 + 0x20;
    *(void*)(puVar1 + 0x20) = 0;
    _ChaCha20_ctr32(puVar1,0x40);
    _Poly1305_Init();
    *(void*)(puVar1 + 0x20) = 1;
    *(void*)(puVar1 + 0x70) = 0;
    param_1 = 0;
    *(void*)(puVar1 + 0xa8) = 0;
    *(void*)(puVar1 + 0xb0) = 0;
    *(void*)(puVar1 + 0xbc) = 1;
    if (puVar2 != (void*)0xffffffffffffffff) {
      param_1 = _Poly1305_Update(in_RCX,0xd);
      *(void*)(puVar1 + 0xa8) = 0xd;
      *(void*)(puVar1 + 0xb8) = 1;
    }
  }
  if (param_2 == 0) {
    bVar10 = puVar2 == in_RCX;
    puVar9 = (void*)0x0;
    iVar6 = *(int *)(puVar1 + 0xb8);
joined_r0x0102d258:
    if (iVar6 != 0) {
      if ((*(uint64_t *)(puVar1 + 0xa8) & 0xf) != 0) {
        param_1 = _Poly1305_Update(in_RCX,0x10 - (*(uint64_t *)(puVar1 + 0xa8) & 0xf));
      }
      *(void*)(puVar1 + 0xb8) = 0;
    }
    if ((*(uint64_t *)(puVar1 + 0xb0) & 0xf) != 0) {
      param_1 = _Poly1305_Update(in_RCX,0x10 - (*(uint64_t *)(puVar1 + 0xb0) & 0xf));
    }
    _Poly1305_Update(param_1,0x10);
    _Poly1305_Final();
    *(void*)(puVar1 + 0xbc) = 0;
    if (puVar9 == (void*)0x0 || bVar10) {
      if ((*(int *)(this_ptr + 0x10) == 0) &&
         (iVar6 = _CRYPTO_memcmp(in_RCX,(void *)(int64_t)*(int *)(puVar1 + 0xc0),param_3),
         iVar6 != 0)) {
LAB_0102d53e:
        uVar8 = 0xffffffff;
        goto LAB_0102d4dd;
      }
    }
    else if (*(int *)(this_ptr + 0x10) == 0) {
      iVar6 = _CRYPTO_memcmp(in_RCX,&MACH_HEADER.ncmds,param_3);
      if (iVar6 != 0) {
        ___bzero();
        goto LAB_0102d53e;
      }
    }
    else {
      uVar5 = *(void*)(puVar1 + 0x8c);
      *arg1 = *(void*)(puVar1 + 0x84);
      arg1[1] = uVar5;
    }
  }
  else {
    if (arg1 == (void*)0x0) {
      _Poly1305_Update(in_RCX,in_RCX);
      *(void**)(puVar1 + 0xa8) = in_RCX + *(int64_t *)(puVar1 + 0xa8);
      *(void*)(puVar1 + 0xb8) = 1;
      uVar8 = (uint64_t)in_RCX & 0xffffffff;
      goto LAB_0102d4dd;
    }
    if (*(int *)(puVar1 + 0xb8) != 0) {
      if ((*(uint64_t *)(puVar1 + 0xa8) & 0xf) != 0) {
        _Poly1305_Update(in_RCX,0x10 - (*(uint64_t *)(puVar1 + 0xa8) & 0xf));
      }
      *(void*)(puVar1 + 0xb8) = 0;
    }
    *(void*)(puVar1 + 200) = 0xffffffffffffffff;
    puVar9 = in_RCX;
    if ((puVar2 != (void*)0xffffffffffffffff) &&
       (uVar8 = 0xffffffff, puVar9 = puVar2, puVar2 + 0x10 != in_RCX)) goto LAB_0102d4dd;
    if (*(int *)(this_ptr + 0x10) == 0) {
      _Poly1305_Update(in_RCX,puVar9);
      param_1 = FUN_0102cbb0(puVar9,param_2);
      *(void**)(puVar1 + 0xb0) = puVar9 + *(int64_t *)(puVar1 + 0xb0);
    }
    else {
      uVar11 = FUN_0102cbb0(puVar9);
      param_1 = _Poly1305_Update(uVar11,puVar9);
      *(void**)(puVar1 + 0xb0) = puVar9 + *(int64_t *)(puVar1 + 0xb0);
    }
    if (puVar9 != in_RCX) {
      arg1 = (void*)((int64_t)arg1 + (int64_t)puVar9);
      puVar9 = puVar9 + param_2;
      bVar10 = false;
      iVar6 = *(int *)(puVar1 + 0xb8);
      goto joined_r0x0102d258;
    }
  }
  uVar8 = (uint64_t)in_RCX & 0xffffffff;
LAB_0102d4dd:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar8;
  }
                      ___stack_chk_fail();
}

