// Function: FUN_00f7ab20
// Address: 00f7ab20
// Size: 1447 bytes
// Class: Unknown
// String references:
//   "crypto/bio/bf_buff.c"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_00f7ab20(BIO *param_1,void *param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar9;
  void *pvVar10;
  uint *puVar11;
  int flags;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong lVar14;
  size_t line;
  longlong lVar15;
  ulonglong uVar16;
  int unaff_R14D;
  longlong lVar17;
  undefined1 auVar18 [16];
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  line = (size_t)param_3;
  piVar4 = *(int **)(unaff_RDI + 0x38);
  flags = (int)param_2;
  puVar11 = &switchD_00f7ab51::switchdataD_00f7b0c8;
  switch(unaff_ESI) {
  case 1:
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    lVar5 = *(longlong *)(unaff_RDI + 0x40);
    break;
  case 2:
    if (0 < piVar4[4]) {
      return (void *)0x0;
    }
    goto LAB_00f7aee8;
  case 3:
    return (void *)(longlong)piVar4[8];
  case 10:
    if ((void *)(longlong)piVar4[4] != (void *)0x0) {
      return (void *)(longlong)piVar4[4];
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x40);
    break;
  case 0xb:
    if (*(longlong *)(unaff_RDI + 0x40) == 0) {
      return (void *)0x0;
    }
    if (0 < piVar4[8]) {
      while( true ) {
        _BIO_clear_flags((BIO *)puVar11,(int)param_2);
        line = (size_t)param_3;
        param_2 = (void *)(ulonglong)(uint)piVar4[8];
        if (piVar4[8] < 1) break;
        iVar6 = _BIO_write((BIO *)puVar11,param_2,line);
        _BIO_copy_next_retry((BIO *)puVar11);
        if (iVar6 < 1) {
          return (void *)(longlong)iVar6;
        }
        piVar4[9] = piVar4[9] + iVar6;
        piVar4[8] = piVar4[8] - iVar6;
      }
      piVar4[8] = 0;
      piVar4[9] = 0;
    }
    goto LAB_00f7aee8;
  case 0xc:
    lVar7 = _BIO_int_ctrl((BIO *)0x0,*piVar4,line,(int)param_4);
    if (CONCAT44(extraout_var,lVar7) == 0) {
      return (void *)0x0;
    }
    lVar7 = _BIO_int_ctrl((BIO *)((longlong)&MACH_HEADER.magic + 1),piVar4[1],line,(int)param_4);
    if (CONCAT44(extraout_var_00,lVar7) == 0) {
      return (void *)0x0;
    }
    return (void *)((longlong)&MACH_HEADER.magic + 1);
  case 0xd:
    if ((void *)(longlong)piVar4[8] != (void *)0x0) {
      return (void *)(longlong)piVar4[8];
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x40);
    break;
  case 0x1d:
    FUN_00f7a860(&switchD_00f7ab51::switchdataD_00f7b0c8,0);
    if ((longlong)piVar4[4] < (longlong)param_2) {
      param_2 = (void *)(longlong)piVar4[4];
    }
    _memcpy(puVar11,param_2,line);
    return param_2;
  default:
    puVar11 = &switchD_00f7ab95::switchdataD_00f7b13c;
    switch(unaff_ESI) {
    case 0x65:
      if (*(longlong *)(unaff_RDI + 0x40) == 0) {
        return (void *)0x0;
      }
      _BIO_clear_flags((BIO *)&switchD_00f7ab95::switchdataD_00f7b13c,flags);
      uVar8 = _BIO_ctrl(param_1,flags,line,param_4);
      _BIO_copy_next_retry(param_1);
      return (void *)(ulonglong)uVar8;
    case 0x74:
      uVar8 = piVar4[4];
      if ((int)uVar8 < 1) {
        return (void *)0x0;
      }
      lVar5 = *(longlong *)(piVar4 + 2);
      lVar15 = (longlong)piVar4[5];
      if (uVar8 < 4) {
        uVar12 = 0;
        pvVar9 = (void *)0x0;
      }
      else {
        uVar12 = (ulonglong)(uVar8 & 0xfffffffc);
        uVar16 = (uVar12 - 4 >> 2) + 1;
        if (uVar12 - 4 == 0) {
          lVar17 = 0;
          lVar19 = 0;
          lVar14 = 0;
          lVar20 = 0;
          lVar21 = 0;
        }
        else {
          lVar1 = lVar15 + lVar5;
          lVar13 = -(uVar16 & 0xfffffffffffffffe);
          lVar17 = 0;
          lVar19 = 0;
          lVar14 = 0;
          lVar20 = 0;
          lVar21 = 0;
          do {
            uVar2 = *(undefined2 *)(lVar1 + 2 + lVar14);
            auVar26[0] = -((char)*(undefined2 *)(lVar1 + lVar14) == DAT_023ed360);
            auVar26[1] = -((char)((ushort)*(undefined2 *)(lVar1 + lVar14) >> 8) == UNK_023ed361);
            auVar26[2] = -(UNK_023ed362 == '\0');
            auVar26[3] = -(UNK_023ed363 == '\0');
            auVar26[4] = -(UNK_023ed364 == '\0');
            auVar26[5] = -(UNK_023ed365 == '\0');
            auVar26[6] = -(UNK_023ed366 == '\0');
            auVar26[7] = -(UNK_023ed367 == '\0');
            auVar26[8] = -(UNK_023ed368 == '\0');
            auVar26[9] = -(UNK_023ed369 == '\0');
            auVar26[10] = -(UNK_023ed36a == '\0');
            auVar26[0xb] = -(UNK_023ed36b == '\0');
            auVar26[0xc] = -(UNK_023ed36c == '\0');
            auVar26[0xd] = -(UNK_023ed36d == '\0');
            auVar26[0xe] = -(UNK_023ed36e == '\0');
            auVar26[0xf] = -(UNK_023ed36f == '\0');
            auVar24 = pmovzxbq(auVar26,auVar26);
            auVar25[0] = -((char)uVar2 == DAT_023ed360);
            auVar25[1] = -((char)((ushort)uVar2 >> 8) == UNK_023ed361);
            auVar25[2] = -(UNK_023ed362 == '\0');
            auVar25[3] = -(UNK_023ed363 == '\0');
            auVar25[4] = -(UNK_023ed364 == '\0');
            auVar25[5] = -(UNK_023ed365 == '\0');
            auVar25[6] = -(UNK_023ed366 == '\0');
            auVar25[7] = -(UNK_023ed367 == '\0');
            auVar25[8] = -(UNK_023ed368 == '\0');
            auVar25[9] = -(UNK_023ed369 == '\0');
            auVar25[10] = -(UNK_023ed36a == '\0');
            auVar25[0xb] = -(UNK_023ed36b == '\0');
            auVar25[0xc] = -(UNK_023ed36c == '\0');
            auVar25[0xd] = -(UNK_023ed36d == '\0');
            auVar25[0xe] = -(UNK_023ed36e == '\0');
            auVar25[0xf] = -(UNK_023ed36f == '\0');
            auVar26 = pmovzxbq(auVar25,auVar25);
            uVar2 = *(undefined2 *)(lVar1 + 4 + lVar14);
            uVar3 = *(undefined2 *)(lVar1 + 6 + lVar14);
            auVar18[0] = -((char)uVar2 == DAT_023ed360);
            auVar18[1] = -((char)((ushort)uVar2 >> 8) == UNK_023ed361);
            auVar18[2] = -(UNK_023ed362 == '\0');
            auVar18[3] = -(UNK_023ed363 == '\0');
            auVar18[4] = -(UNK_023ed364 == '\0');
            auVar18[5] = -(UNK_023ed365 == '\0');
            auVar18[6] = -(UNK_023ed366 == '\0');
            auVar18[7] = -(UNK_023ed367 == '\0');
            auVar18[8] = -(UNK_023ed368 == '\0');
            auVar18[9] = -(UNK_023ed369 == '\0');
            auVar18[10] = -(UNK_023ed36a == '\0');
            auVar18[0xb] = -(UNK_023ed36b == '\0');
            auVar18[0xc] = -(UNK_023ed36c == '\0');
            auVar18[0xd] = -(UNK_023ed36d == '\0');
            auVar18[0xe] = -(UNK_023ed36e == '\0');
            auVar18[0xf] = -(UNK_023ed36f == '\0');
            auVar18 = pmovzxbq(auVar18,auVar18);
            lVar17 = SUB168(auVar18 & _DAT_0240e2a0,0) + SUB168(auVar24 & _DAT_0240e2a0,0) + lVar17;
            lVar19 = SUB168(auVar18 & _DAT_0240e2a0,8) + SUB168(auVar24 & _DAT_0240e2a0,8) + lVar19;
            auVar24[0] = -((char)uVar3 == DAT_023ed360);
            auVar24[1] = -((char)((ushort)uVar3 >> 8) == UNK_023ed361);
            auVar24[2] = -(UNK_023ed362 == '\0');
            auVar24[3] = -(UNK_023ed363 == '\0');
            auVar24[4] = -(UNK_023ed364 == '\0');
            auVar24[5] = -(UNK_023ed365 == '\0');
            auVar24[6] = -(UNK_023ed366 == '\0');
            auVar24[7] = -(UNK_023ed367 == '\0');
            auVar24[8] = -(UNK_023ed368 == '\0');
            auVar24[9] = -(UNK_023ed369 == '\0');
            auVar24[10] = -(UNK_023ed36a == '\0');
            auVar24[0xb] = -(UNK_023ed36b == '\0');
            auVar24[0xc] = -(UNK_023ed36c == '\0');
            auVar24[0xd] = -(UNK_023ed36d == '\0');
            auVar24[0xe] = -(UNK_023ed36e == '\0');
            auVar24[0xf] = -(UNK_023ed36f == '\0');
            auVar18 = pmovzxbq(auVar24,auVar24);
            lVar20 = SUB168(auVar18 & _DAT_0240e2a0,0) + SUB168(auVar26 & _DAT_0240e2a0,0) + lVar20;
            lVar21 = SUB168(auVar18 & _DAT_0240e2a0,8) + SUB168(auVar26 & _DAT_0240e2a0,8) + lVar21;
            lVar14 = lVar14 + 8;
            lVar13 = lVar13 + 2;
          } while (lVar13 != 0);
        }
        if ((uVar16 & 1) != 0) {
          uVar2 = *(undefined2 *)(lVar5 + 2 + lVar14 + lVar15);
          auVar22[0] = -((char)uVar2 == DAT_023ed360);
          auVar22[1] = -((char)((ushort)uVar2 >> 8) == UNK_023ed361);
          auVar22[2] = -(UNK_023ed362 == '\0');
          auVar22[3] = -(UNK_023ed363 == '\0');
          auVar22[4] = -(UNK_023ed364 == '\0');
          auVar22[5] = -(UNK_023ed365 == '\0');
          auVar22[6] = -(UNK_023ed366 == '\0');
          auVar22[7] = -(UNK_023ed367 == '\0');
          auVar22[8] = -(UNK_023ed368 == '\0');
          auVar22[9] = -(UNK_023ed369 == '\0');
          auVar22[10] = -(UNK_023ed36a == '\0');
          auVar22[0xb] = -(UNK_023ed36b == '\0');
          auVar22[0xc] = -(UNK_023ed36c == '\0');
          auVar22[0xd] = -(UNK_023ed36d == '\0');
          auVar22[0xe] = -(UNK_023ed36e == '\0');
          auVar22[0xf] = -(UNK_023ed36f == '\0');
          auVar18 = pmovzxbq(auVar22,auVar22);
          lVar20 = lVar20 + SUB168(auVar18 & _DAT_0240e2a0,0);
          lVar21 = lVar21 + SUB168(auVar18 & _DAT_0240e2a0,8);
          uVar2 = *(undefined2 *)(lVar5 + lVar14 + lVar15);
          auVar23[0] = -((char)uVar2 == DAT_023ed360);
          auVar23[1] = -((char)((ushort)uVar2 >> 8) == UNK_023ed361);
          auVar23[2] = -(UNK_023ed362 == '\0');
          auVar23[3] = -(UNK_023ed363 == '\0');
          auVar23[4] = -(UNK_023ed364 == '\0');
          auVar23[5] = -(UNK_023ed365 == '\0');
          auVar23[6] = -(UNK_023ed366 == '\0');
          auVar23[7] = -(UNK_023ed367 == '\0');
          auVar23[8] = -(UNK_023ed368 == '\0');
          auVar23[9] = -(UNK_023ed369 == '\0');
          auVar23[10] = -(UNK_023ed36a == '\0');
          auVar23[0xb] = -(UNK_023ed36b == '\0');
          auVar23[0xc] = -(UNK_023ed36c == '\0');
          auVar23[0xd] = -(UNK_023ed36d == '\0');
          auVar23[0xe] = -(UNK_023ed36e == '\0');
          auVar23[0xf] = -(UNK_023ed36f == '\0');
          auVar18 = pmovzxbq(auVar23,auVar23);
          lVar17 = lVar17 + SUB168(auVar18 & _DAT_0240e2a0,0);
          lVar19 = lVar19 + SUB168(auVar18 & _DAT_0240e2a0,8);
        }
        pvVar9 = (void *)(lVar19 + lVar21 + lVar17 + lVar20);
        if (uVar12 == uVar8) {
          return pvVar9;
        }
      }
      do {
        pvVar9 = (void *)((longlong)pvVar9 + (ulonglong)(*(char *)(lVar5 + lVar15 + uVar12) == '\n')
                         );
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
      return pvVar9;
    case 0x75:
      if (param_1 == (BIO *)0x0) {
LAB_00f7adec:
        param_2 = (void *)((ulonglong)param_2 & 0xffffffff);
        pvVar9 = *(void **)(piVar4 + 2);
        pvVar10 = *(void **)(piVar4 + 6);
      }
      else {
        if (*(int *)&param_1->method != 0) {
          flags = *piVar4;
          goto LAB_00f7adec;
        }
        param_2 = (void *)(ulonglong)(uint)piVar4[1];
        pvVar9 = *(void **)(piVar4 + 2);
        pvVar10 = *(void **)(piVar4 + 6);
      }
      iVar6 = (int)param_2;
      if (((flags < 0x1001) || (flags == *piVar4)) ||
         (pvVar9 = _CRYPTO_malloc(iVar6,(char *)((longlong)&section_00000108.reloff + 1),line),
         pvVar9 != (void *)0x0)) {
        if (((iVar6 < 0x1001) || (iVar6 == piVar4[1])) ||
           (pvVar10 = _CRYPTO_malloc(iVar6,(char *)((longlong)&section_00000108.nrelocs + 2),line),
           pvVar10 != (void *)0x0)) {
          if (*(void **)(piVar4 + 2) != pvVar9) {
            _CRYPTO_free(param_2);
            *(void **)(piVar4 + 2) = pvVar9;
            piVar4[4] = 0;
            piVar4[5] = 0;
            *piVar4 = flags;
          }
          pvVar9 = (void *)((longlong)&MACH_HEADER.magic + 1);
          if (*(void **)(piVar4 + 6) != pvVar10) {
            _CRYPTO_free(param_2);
            *(void **)(piVar4 + 6) = pvVar10;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[1] = iVar6;
            return pvVar9;
          }
          return pvVar9;
        }
        if (pvVar9 != *(void **)(piVar4 + 2)) {
          _CRYPTO_free(param_2);
        }
      }
LAB_00f7b092:
      _ERR_put_error(0x200943f,0x41,0x197,param_4,unaff_R14D);
      return (void *)0x0;
    case 0x7a:
      if ((longlong)param_2 <= (longlong)*piVar4) {
LAB_00f7adc5:
        piVar4[5] = 0;
        piVar4[4] = flags;
        _memcpy(puVar11,(void *)(longlong)flags,line);
        return (void *)((longlong)&MACH_HEADER.magic + 1);
      }
      pvVar9 = _CRYPTO_malloc(0xf7b13c,section_00000108.segname + 0xc,line);
      if (pvVar9 != (void *)0x0) {
        _CRYPTO_free(puVar11);
        *(void **)(piVar4 + 2) = pvVar9;
        goto LAB_00f7adc5;
      }
      goto LAB_00f7b092;
    }
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    lVar5 = *(longlong *)(unaff_RDI + 0x40);
  }
  if (lVar5 == 0) {
    return (void *)0x0;
  }
LAB_00f7aee8:
  uVar8 = _BIO_ctrl(param_1,flags,line,param_4);
  return (void *)(ulonglong)uVar8;
}


