// Function: FUN_00fbaa70
// Address: 00fbaa70
// Size: 828 bytes
// Class: Unknown
// String references:
//   "\n"
//   "%02x%s"
//   "crypto/dh/dh_ameth.c"
//   "DH Private-Key"
//   "DH Public-Key"
//   "DH Parameters"
//   "%s: (%d bit)\n"
//   "private-key:"
//   "public-key:"
//   "prime:"
//   "generator:"
//   "subgroup order:"
//   "subgroup factor:"
//   "seed:"
//   "counter:"
//   "recommended-private-length: %d bits\n"

uint64_t FUN_00fbaa70(BIO *param_1,int param_2,uint64_t param_3,char *param_4)

{
  byte *pbVar1;
  int64_t lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int func;
  char *pcVar8;
  char *pcVar9;
  uint64_t uVar10;
  int64_t arg1;
  uint64_t uVar11;
  int line;
  uint64_t unaff_R12;
  int64_t lVar12;
  int64_t lVar13;
  BIO *b;
  
  line = (int)unaff_R12;
  iVar5 = (int)param_1;
  if (iVar5 == 2) {
    lVar13 = *(int64_t *)(arg1 + 0x28);
LAB_00fbaa9d:
    lVar12 = *(int64_t *)(arg1 + 0x20);
    bVar3 = 1;
    lVar2 = *(int64_t *)(arg1 + 8);
  }
  else {
    lVar13 = 0;
    if (0 < iVar5) goto LAB_00fbaa9d;
    bVar3 = 0;
    lVar12 = 0;
    lVar2 = *(int64_t *)(arg1 + 8);
  }
  func = 0x43;
  if ((lVar2 == 0) ||
     (((func = 0x43, iVar5 == 2 && (lVar13 == 0)) || ((bool)(bVar3 & lVar12 == 0)))))
  goto LAB_00fbad7d;
  pcVar8 = "DH Parameters";
  if (iVar5 == 1) {
    pcVar8 = "DH Public-Key";
  }
  pcVar9 = "DH Private-Key";
  if (iVar5 != 2) {
    pcVar9 = pcVar8;
  }
  _BIO_indent(param_1,0x80,param_2);
  uVar4 = _BN_num_bits((BIGNUM *)param_1);
  iVar5 = _BIO_printf((BIO *)(uint64_t)uVar4,pcVar9);
  line = (int)unaff_R12;
  func = 7;
  if (iVar5 < 1) goto LAB_00fbad7d;
  uVar4 = param_2 + 4;
  iVar5 = _ASN1_bn_print(0,lVar13,uVar4);
  line = (int)unaff_R12;
  if (iVar5 != 0) {
    iVar5 = _ASN1_bn_print(0,lVar12,uVar4);
    line = (int)unaff_R12;
    if (iVar5 != 0) {
      iVar5 = _ASN1_bn_print(0,*(void*)(arg1 + 8),uVar4);
      line = (int)unaff_R12;
      if (iVar5 != 0) {
        pcVar8 = (char *)0x0;
        uVar11 = (uint64_t)uVar4;
        iVar5 = _ASN1_bn_print(0,*(void*)(arg1 + 0x10));
        line = (int)unaff_R12;
        if (iVar5 != 0) {
          if (*(int64_t *)(arg1 + 0x40) != 0) {
            pcVar8 = (char *)0x0;
            uVar11 = (uint64_t)uVar4;
            iVar5 = _ASN1_bn_print();
            line = (int)unaff_R12;
            if (iVar5 == 0) goto LAB_00fbad78;
          }
          if (*(int64_t *)(arg1 + 0x48) != 0) {
            pcVar8 = (char *)0x0;
            uVar11 = (uint64_t)uVar4;
            iVar5 = _ASN1_bn_print();
            line = (int)unaff_R12;
            if (iVar5 == 0) goto LAB_00fbad78;
          }
          line = (int)unaff_R12;
          uVar7 = (uint)uVar11;
          if (*(int64_t *)(arg1 + 0x50) == 0) {
LAB_00fbad1b:
            if (*(int64_t *)(arg1 + 0x60) != 0) {
              pcVar8 = (char *)0x0;
              uVar7 = uVar4;
              iVar5 = _ASN1_bn_print();
              if (iVar5 == 0) goto LAB_00fbad78;
            }
            if (*(int *)(arg1 + 0x18) == 0) {
              return 1;
            }
            _BIO_indent((BIO *)pcVar8,0x80,uVar7);
            iVar5 = _BIO_printf((BIO *)pcVar8,(char *)(uint64_t)*(uint *)(arg1 + 0x18));
            func = 7;
            if (0 < iVar5) {
              return 1;
            }
            goto LAB_00fbad7d;
          }
          pcVar9 = section_00000068.segname + 8;
          _BIO_indent((BIO *)pcVar8,0x80,uVar7);
          _BIO_puts((BIO *)pcVar8,pcVar9);
          uVar10 = 0;
          do {
            line = (int)unaff_R12;
            uVar7 = (uint)uVar11;
            uVar6 = *(uint *)(arg1 + 0x58);
            if ((int64_t)(int)uVar6 <= (int64_t)uVar10) {
              iVar5 = _BIO_write((BIO *)pcVar8,(void *)((int64_t)&MACH_HEADER.magic + 1),uVar7);
              if (iVar5 < 1) {
                return 0;
              }
              goto LAB_00fbad1b;
            }
            iVar5 = (int)((uVar10 & 0xffffffff) / 0xf);
            uVar7 = iVar5 * -0xf + (int)uVar10;
            b = (BIO *)(uint64_t)uVar7;
            if (uVar7 == 0) {
              iVar5 = _BIO_puts((BIO *)0x0,(char *)(uint64_t)(uint)(iVar5 * 0x10));
              line = (int)unaff_R12;
              if (iVar5 < 1) break;
              iVar5 = _BIO_indent(b,0x80,(int)uVar11);
              line = (int)unaff_R12;
              if (iVar5 == 0) break;
              uVar6 = *(uint *)(arg1 + 0x58);
            }
            pbVar1 = (byte *)(*(int64_t *)(arg1 + 0x50) + uVar10);
            uVar10 = uVar10 + 1;
            pcVar8 = ":";
            if (uVar10 == uVar6) {
              pcVar8 = "";
            }
            iVar5 = _BIO_printf((BIO *)pcVar8,(char *)(uint64_t)*pbVar1);
            line = (int)unaff_R12;
          } while (0 < iVar5);
        }
      }
    }
  }
LAB_00fbad78:
  func = 7;
LAB_00fbad7d:
  _ERR_put_error(0x200c2bd,func,0x157,param_4,line);
  return 0;
}

