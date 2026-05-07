// Function: FUN_00f62480
// Address: 00f62480
// Size: 908 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/a_strex.c"
//   "0123456789ABCDEF"
//   "\""


int FUN_00f62480(ASN1_TYPE *param_1,uint param_2,int param_3,char *param_4)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ASN1_TYPE *pAVar8;
  uchar **out;
  char *pcVar9;
  longlong lVar10;
  longlong unaff_RSI;
  code *unaff_RDI;
  uint uVar11;
  int in_stack_ffffffffffffffa8;
  char local_31;
  
  local_31 = '\0';
  uVar1 = *(uint *)&param_1->field_0x4;
  iVar3 = 0;
  pAVar8 = param_1;
  if ((param_2 & 0x40) != 0) {
    _ASN1_tag2str((int)param_1);
    sVar2 = _strlen((char *)pAVar8);
    iVar3 = (*unaff_RDI)();
    if (iVar3 == 0) {
      return -1;
    }
    iVar3 = (*unaff_RDI)();
    pAVar8 = (ASN1_TYPE *)CONCAT71((int7)((ulonglong)pAVar8 >> 8),iVar3 != 0);
    if (iVar3 == 0) {
      return -1;
    }
    iVar3 = (iVar3 != 0) + sVar2;
  }
  if ((char)param_2 < '\0') {
LAB_00f62644:
    out = (uchar **)((longlong)&MACH_HEADER.magic + 1);
    iVar5 = (*unaff_RDI)();
    if (iVar5 != 0) {
      if ((param_2 & 0x200) == 0) {
        iVar5 = param_1->type;
        if (unaff_RSI != 0) {
          if (iVar5 == 0) {
            return iVar3 + 1;
          }
          pcVar9 = (param_1->value).ptr;
          lVar10 = 0;
          do {
            iVar6 = (*unaff_RDI)("0123456789ABCDEF"[(byte)pcVar9[lVar10] >> 4],2);
            if (iVar6 == 0) {
              return -1;
            }
            lVar10 = lVar10 + 1;
          } while (iVar5 != lVar10);
        }
        if ((-1 < iVar5 * 2) && (iVar5 = iVar5 * 2 + 1, -1 < iVar5)) {
          return iVar5 + iVar3;
        }
      }
      else {
        iVar5 = _i2d_ASN1_TYPE(pAVar8,out);
        pcVar9 = section_00000108.segname + 3;
        pvVar7 = _CRYPTO_malloc((int)pAVar8,section_00000108.segname + 3,param_3);
        if (pvVar7 == (void *)0x0) {
          _ERR_put_error(0x20073cf,0x41,0x11c,param_4,in_stack_ffffffffffffffa8);
        }
        else {
          _i2d_ASN1_TYPE(pAVar8,(uchar **)pcVar9);
          if ((unaff_RSI != 0) && (iVar5 != 0)) {
            lVar10 = 0;
            do {
              pAVar8 = (ASN1_TYPE *)
                       (ulonglong)
                       (byte)"0123456789ABCDEF"[*(byte *)((longlong)pvVar7 + lVar10) >> 4];
              iVar6 = (*unaff_RDI)(pAVar8,2);
              if (iVar6 == 0) {
                iVar5 = -1;
                goto LAB_00f627d4;
              }
              lVar10 = lVar10 + 1;
            } while (iVar5 != lVar10);
          }
          iVar5 = iVar5 * 2;
LAB_00f627d4:
          _CRYPTO_free(pAVar8);
          if (-1 < iVar5) {
            return iVar5 + 1 + iVar3;
          }
        }
      }
    }
  }
  else {
    uVar11 = 1;
    uVar4 = 9;
    if ((param_2 & 0x20) == 0) {
      pAVar8 = (ASN1_TYPE *)(ulonglong)(uVar1 - 1);
      if ((uVar1 - 1 < 0x1e) &&
         (pAVar8 = (ASN1_TYPE *)0x2a23efff, (0x2a23efffUL >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) {
        uVar11 = 0;
        if (uVar1 != 0xc) {
          uVar11 = (int)(char)(&DAT_023ebb70)[uVar1];
        }
        uVar4 = 1;
        if (uVar1 != 0xc) {
          uVar4 = (int)(char)(&DAT_023ebb70)[uVar1] | 8;
        }
      }
      else if ((param_2 & 0x100) != 0) goto LAB_00f62644;
    }
    if ((param_2 & 0x10) != 0) {
      uVar11 = uVar4;
    }
    iVar5 = FUN_00f628b0(param_2 & 0x40f,uVar11,&local_31);
    if (iVar5 < 0) {
      return -1;
    }
    iVar6 = iVar5 + 2;
    if (local_31 == '\0') {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 + iVar3;
    if (unaff_RSI == 0) {
      return iVar6;
    }
    if (((local_31 == '\0') || (iVar3 = (*unaff_RDI)(local_31,1), iVar3 != 0)) &&
       (iVar3 = FUN_00f628b0(param_2 & 0x40f,uVar11,0), -1 < iVar3)) {
      if (local_31 == '\0') {
        return iVar6;
      }
      iVar3 = (*unaff_RDI)();
      if (iVar3 == 0) {
        return -1;
      }
      return iVar6;
    }
  }
  return -1;
}


