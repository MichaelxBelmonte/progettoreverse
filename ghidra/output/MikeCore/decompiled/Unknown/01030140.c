// Function: FUN_01030140
// Address: 01030140
// Size: 601 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01030140(MD5_CTX *param_1,uint param_2,size_t param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  MD5_CTX *c;
  size_t len;
  MD5_CTX *c_00;
  int unaff_ESI;
  undefined8 uVar4;
  uint uVar5;
  
  c_00 = (MD5_CTX *)(ulonglong)param_2;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  c = param_1;
  lVar3 = _EVP_CIPHER_CTX_get_cipher_data();
  uVar4 = 0xffffffff;
  if (unaff_ESI == 0x16) {
    if (param_2 == 0xd) {
      uVar5 = (uint)*(ushort *)((longlong)&param_1->C + 3) << 0x10;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8;
      iVar2 = _EVP_CIPHER_CTX_encrypting();
      if (iVar2 == 0) {
        if (uVar5 < 0x10) goto LAB_01030372;
        uVar5 = uVar5 - 0x10;
        *(ushort *)((longlong)&param_1->C + 3) = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
      }
      *(ulonglong *)(lVar3 + 0x520) = (ulonglong)uVar5;
      *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x408);
      *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
      *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
      *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
      *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
      *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
      *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
      *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
      *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
      *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
      *(undefined8 *)(lVar3 + 0x50c) = *(undefined8 *)(lVar3 + 0x454);
      *(undefined8 *)(lVar3 + 0x514) = *(undefined8 *)(lVar3 + 0x45c);
      _MD5_Update(c,(void *)((longlong)&MACH_HEADER.filetype + 1),param_3);
      uVar4 = 0x10;
    }
  }
  else if (unaff_ESI == 0x17) {
    if ((int)param_2 < 0x41) {
      c = (MD5_CTX *)&segment_command_00000020.vmsize;
      ___memcpy_chk(0x40,(longlong)(int)param_2);
    }
    else {
      _MD5_Init(c);
      _MD5_Update(c,c_00,param_3);
      _MD5_Final((uchar *)c,c_00);
    }
    _MD5_Init(c);
    _MD5_Update(c,&segment_command_00000020.vmsize,param_3);
    _MD5_Init(c);
    len = 0x40;
    _MD5_Update(c,&segment_command_00000020.vmsize,param_3);
    _OPENSSL_cleanse(c,len);
    uVar4 = 1;
  }
LAB_01030372:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


