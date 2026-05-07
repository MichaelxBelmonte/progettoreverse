// Function: FUN_01034c20
// Address: 01034c20
// Size: 574 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01034c20(SHA_CTX *param_1,int param_2,size_t param_3)

{
  longlong lVar1;
  int iVar2;
  size_t len;
  MD5_CTX *c;
  SHA_CTX *c_00;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar4 = 0xfffffffe;
  if (unaff_ESI == 0x1d) {
    uVar4 = 0;
    uVar3 = 0;
    if (unaff_RDI != 0) {
      _EVP_MD_CTX_md_data();
      if (param_2 == 0x30) {
        _EVP_MD_CTX_md_data();
        iVar2 = _MD5_Update((MD5_CTX *)param_1,segment_command_00000020.segname + 8,param_3);
        if (iVar2 != 0) {
          iVar2 = _SHA1_Update(param_1,segment_command_00000020.segname + 8,param_3);
          uVar4 = uVar3;
          if (0 < iVar2) {
            c = (MD5_CTX *)(segment_command_00000020.segname + 8);
            iVar2 = _MD5_Update((MD5_CTX *)param_1,segment_command_00000020.segname + 8,param_3);
            if (iVar2 != 0) {
              iVar2 = _MD5_Final((uchar *)param_1,c);
              if (iVar2 != 0) {
                c_00 = (SHA_CTX *)segment_command_00000020.segname;
                iVar2 = _SHA1_Update(param_1,segment_command_00000020.segname,param_3);
                if (iVar2 != 0) {
                  iVar2 = _SHA1_Final((uchar *)param_1,c_00);
                  if (iVar2 != 0) {
                    _EVP_MD_CTX_md_data();
                    iVar2 = _MD5_Init((MD5_CTX *)param_1);
                    if (iVar2 != 0) {
                      iVar2 = _SHA1_Init(param_1);
                      if (iVar2 != 0) {
                        _EVP_MD_CTX_md_data();
                        iVar2 = _MD5_Update((MD5_CTX *)param_1,segment_command_00000020.segname + 8,
                                            param_3);
                        if (iVar2 != 0) {
                          iVar2 = _SHA1_Update(param_1,segment_command_00000020.segname + 8,param_3)
                          ;
                          if (0 < iVar2) {
                            iVar2 = _MD5_Update((MD5_CTX *)param_1,
                                                segment_command_00000020.segname + 8,param_3);
                            if (iVar2 != 0) {
                              iVar2 = _MD5_Update((MD5_CTX *)param_1,&MACH_HEADER.ncmds,param_3);
                              if (iVar2 != 0) {
                                iVar2 = _SHA1_Update(param_1,segment_command_00000020.segname,
                                                     param_3);
                                if (iVar2 != 0) {
                                  len = 0x14;
                                  iVar2 = _SHA1_Update(param_1,&MACH_HEADER.sizeofcmds,param_3);
                                  if (iVar2 != 0) {
                                    _OPENSSL_cleanse(param_1,len);
                                    _OPENSSL_cleanse(param_1,len);
                                    uVar4 = 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


