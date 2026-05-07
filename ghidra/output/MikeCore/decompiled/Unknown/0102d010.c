// Function: FUN_0102d010
// Address: 0102d010
// Size: 1979 bytes
// Class: Unknown


ulonglong FUN_0102d010(undefined4 param_1,longlong param_2,size_t param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *in_RCX;
  size_t len;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  size_t len_00;
  ulonglong uVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118 [56];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar1 = *(undefined1 **)(unaff_RDI + 0x78);
  puVar2 = *(undefined1 **)(puVar1 + 200);
  if (*(int *)(puVar1 + 0xbc) == 0) {
    if ((puVar2 != (undefined1 *)0xffffffffffffffff) && (unaff_RSI != (undefined8 *)0x0)) {
      uVar8 = 0xffffffff;
      if (puVar2 + 0x10 == in_RCX) {
        len_00 = (int)puVar1 + 0x20;
        *(undefined4 *)(puVar1 + 0x20) = 0;
        puVar9 = puVar1;
        if (section_000000b8.sectname + 8 < puVar2) {
          _ChaCha20_ctr32(puVar1,0x40);
          uVar11 = _Poly1305_Init();
          *(undefined4 *)(puVar1 + 0x20) = 1;
          *(undefined4 *)(puVar1 + 0x70) = 0;
          uVar11 = _Poly1305_Update(uVar11,0x10);
          *(undefined8 *)(puVar1 + 0xa8) = 0xd;
          *(undefined1 **)(puVar1 + 0xb0) = puVar2;
          if (*(int *)(unaff_RDI + 0x10) == 0) {
            _Poly1305_Update(uVar11,puVar2);
            uVar11 = _ChaCha20_ctr32(puVar1,puVar2);
          }
          else {
            uVar11 = _ChaCha20_ctr32(puVar1,puVar2);
            uVar11 = _Poly1305_Update(uVar11,puVar2);
          }
          unaff_RSI = (undefined8 *)((longlong)unaff_RSI + (longlong)puVar2);
          _Poly1305_Update(uVar11,-(int)puVar2 & 0xf);
          len = 0x10;
          puVar7 = local_118;
        }
        else {
          _ChaCha20_ctr32();
          _Poly1305_Init();
          *(undefined4 *)(puVar1 + 0x70) = 0;
          local_128 = *(undefined4 *)(puVar1 + 0x94);
          uStack_124 = *(undefined4 *)(puVar1 + 0x98);
          uStack_120 = *(undefined4 *)(puVar1 + 0x9c);
          uStack_11c = *(undefined4 *)(puVar1 + 0xa0);
          *(undefined8 *)(puVar1 + 0xa8) = 0xd;
          *(undefined1 **)(puVar1 + 0xb0) = puVar2;
          if (puVar2 == (undefined1 *)0x0) {
            len = 0x20;
            puVar7 = local_118;
          }
          else {
            puVar9 = puVar2;
            if (*(int *)(unaff_RDI + 0x10) == 0) {
              puVar7 = (undefined4 *)_xor128_decrypt_n_pad(puVar2,local_118);
            }
            else {
              puVar7 = (undefined4 *)_xor128_encrypt_n_pad(puVar2,local_118);
            }
            unaff_RSI = (undefined8 *)((longlong)unaff_RSI + (longlong)puVar2);
            len = ((int)puVar7 - (int)&local_128) + 0x10;
          }
        }
        uVar11 = *(undefined4 *)(puVar1 + 0xac);
        uVar3 = *(undefined4 *)(puVar1 + 0xb0);
        uVar4 = *(undefined4 *)(puVar1 + 0xb4);
        *puVar7 = *(undefined4 *)(puVar1 + 0xa8);
        puVar7[1] = uVar11;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        _Poly1305_Update();
        _OPENSSL_cleanse(puVar9,len);
        _Poly1305_Final();
        *(undefined8 *)(puVar1 + 200) = 0xffffffffffffffff;
        if (*(int *)(unaff_RDI + 0x10) == 0) {
          iVar6 = _CRYPTO_memcmp(puVar9,&MACH_HEADER.ncmds,len_00);
          if (iVar6 != 0) {
            ___bzero();
            goto LAB_0102d4dd;
          }
        }
        else {
          uVar5 = *(undefined8 *)(puVar1 + 0x8c);
          *unaff_RSI = *(undefined8 *)(puVar1 + 0x84);
          unaff_RSI[1] = uVar5;
        }
        uVar8 = (ulonglong)in_RCX & 0xffffffff;
      }
      goto LAB_0102d4dd;
    }
    param_3 = (int)puVar1 + 0x20;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    _ChaCha20_ctr32(puVar1,0x40);
    _Poly1305_Init();
    *(undefined4 *)(puVar1 + 0x20) = 1;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    param_1 = 0;
    *(undefined8 *)(puVar1 + 0xa8) = 0;
    *(undefined8 *)(puVar1 + 0xb0) = 0;
    *(undefined4 *)(puVar1 + 0xbc) = 1;
    if (puVar2 != (undefined1 *)0xffffffffffffffff) {
      param_1 = _Poly1305_Update(in_RCX,0xd);
      *(undefined8 *)(puVar1 + 0xa8) = 0xd;
      *(undefined4 *)(puVar1 + 0xb8) = 1;
    }
  }
  if (param_2 == 0) {
    bVar10 = puVar2 == in_RCX;
    puVar9 = (undefined1 *)0x0;
    iVar6 = *(int *)(puVar1 + 0xb8);
joined_r0x0102d258:
    if (iVar6 != 0) {
      if ((*(ulonglong *)(puVar1 + 0xa8) & 0xf) != 0) {
        param_1 = _Poly1305_Update(in_RCX,0x10 - (*(ulonglong *)(puVar1 + 0xa8) & 0xf));
      }
      *(undefined4 *)(puVar1 + 0xb8) = 0;
    }
    if ((*(ulonglong *)(puVar1 + 0xb0) & 0xf) != 0) {
      param_1 = _Poly1305_Update(in_RCX,0x10 - (*(ulonglong *)(puVar1 + 0xb0) & 0xf));
    }
    _Poly1305_Update(param_1,0x10);
    _Poly1305_Final();
    *(undefined4 *)(puVar1 + 0xbc) = 0;
    if (puVar9 == (undefined1 *)0x0 || bVar10) {
      if ((*(int *)(unaff_RDI + 0x10) == 0) &&
         (iVar6 = _CRYPTO_memcmp(in_RCX,(void *)(longlong)*(int *)(puVar1 + 0xc0),param_3),
         iVar6 != 0)) {
LAB_0102d53e:
        uVar8 = 0xffffffff;
        goto LAB_0102d4dd;
      }
    }
    else if (*(int *)(unaff_RDI + 0x10) == 0) {
      iVar6 = _CRYPTO_memcmp(in_RCX,&MACH_HEADER.ncmds,param_3);
      if (iVar6 != 0) {
        ___bzero();
        goto LAB_0102d53e;
      }
    }
    else {
      uVar5 = *(undefined8 *)(puVar1 + 0x8c);
      *unaff_RSI = *(undefined8 *)(puVar1 + 0x84);
      unaff_RSI[1] = uVar5;
    }
  }
  else {
    if (unaff_RSI == (undefined8 *)0x0) {
      _Poly1305_Update(in_RCX,in_RCX);
      *(undefined1 **)(puVar1 + 0xa8) = in_RCX + *(longlong *)(puVar1 + 0xa8);
      *(undefined4 *)(puVar1 + 0xb8) = 1;
      uVar8 = (ulonglong)in_RCX & 0xffffffff;
      goto LAB_0102d4dd;
    }
    if (*(int *)(puVar1 + 0xb8) != 0) {
      if ((*(ulonglong *)(puVar1 + 0xa8) & 0xf) != 0) {
        _Poly1305_Update(in_RCX,0x10 - (*(ulonglong *)(puVar1 + 0xa8) & 0xf));
      }
      *(undefined4 *)(puVar1 + 0xb8) = 0;
    }
    *(undefined8 *)(puVar1 + 200) = 0xffffffffffffffff;
    puVar9 = in_RCX;
    if ((puVar2 != (undefined1 *)0xffffffffffffffff) &&
       (uVar8 = 0xffffffff, puVar9 = puVar2, puVar2 + 0x10 != in_RCX)) goto LAB_0102d4dd;
    if (*(int *)(unaff_RDI + 0x10) == 0) {
      _Poly1305_Update(in_RCX,puVar9);
      param_1 = FUN_0102cbb0(puVar9,param_2);
      *(undefined1 **)(puVar1 + 0xb0) = puVar9 + *(longlong *)(puVar1 + 0xb0);
    }
    else {
      uVar11 = FUN_0102cbb0(puVar9);
      param_1 = _Poly1305_Update(uVar11,puVar9);
      *(undefined1 **)(puVar1 + 0xb0) = puVar9 + *(longlong *)(puVar1 + 0xb0);
    }
    if (puVar9 != in_RCX) {
      unaff_RSI = (undefined8 *)((longlong)unaff_RSI + (longlong)puVar9);
      puVar9 = puVar9 + param_2;
      bVar10 = false;
      iVar6 = *(int *)(puVar1 + 0xb8);
      goto joined_r0x0102d258;
    }
  }
  uVar8 = (ulonglong)in_RCX & 0xffffffff;
LAB_0102d4dd:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


