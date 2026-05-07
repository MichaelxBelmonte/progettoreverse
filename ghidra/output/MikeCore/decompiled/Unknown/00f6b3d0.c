// Function: FUN_00f6b3d0
// Address: 00f6b3d0
// Size: 527 bytes
// Class: Unknown


int FUN_00f6b3d0(BIO *param_1,int *param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  BIO *pBVar5;
  uint *b;
  int *data;
  longlong unaff_RSI;
  int constructed;
  int *piVar6;
  int iVar7;
  BIO *pBVar8;
  
  piVar6 = (int *)((ulonglong)param_2 & 0xffffffff);
  data = param_2;
  puVar4 = (undefined4 *)_BIO_get_data();
  pBVar5 = _BIO_next(param_1);
  if ((((unaff_RSI == 0) || ((int)param_2 < 0)) || (puVar4 == (undefined4 *)0x0)) ||
     (pBVar5 == (BIO *)0x0)) {
    return 0;
  }
  iVar7 = 0;
  pBVar5 = (BIO *)(puVar4 + 0x16);
switchD_00f6b486_default:
  iVar3 = (int)data;
  b = &switchD_00f6b486::switchdataD_00f6b5e0;
  iVar2 = (int)param_3;
  constructed = (int)piVar6;
  switch(*puVar4) {
  case 0:
    pBVar8 = pBVar5;
    if (*(code **)(puVar4 + 10) != (code *)0x0) {
      data = puVar4 + 0x14;
      iVar2 = (**(code **)(puVar4 + 10))();
      iVar3 = (int)data;
      b = (uint *)pBVar5;
      if (iVar2 == 0) goto switchD_00f6b486_caseD_5;
    }
    pBVar5 = pBVar8;
    if ((int)puVar4[0x14] < 1) {
      *puVar4 = 2;
    }
    else {
      *puVar4 = 1;
    }
    goto switchD_00f6b486_default;
  case 1:
    data = *(int **)(puVar4 + 0xc);
    b = (uint *)((longlong)&MACH_HEADER.magic + 2);
    iVar3 = FUN_00f6b980();
    iVar2 = (int)data;
    if (iVar3 < 1) break;
    goto switchD_00f6b486_default;
  case 2:
    iVar3 = _ASN1_object_size(0xf6b5e0,puVar4[9],iVar2);
    puVar4[6] = iVar3 - constructed;
    if ((int)puVar4[4] < iVar3 - constructed) {
      return 0;
    }
    param_3 = (ulonglong)(uint)puVar4[8];
    data = piVar6;
    _ASN1_put_object((uchar **)(ulonglong)(uint)puVar4[9],constructed,puVar4[8],param_4,(int)pBVar5)
    ;
    puVar4[7] = constructed;
    *puVar4 = 3;
    goto switchD_00f6b486_default;
  case 3:
    data = (int *)(ulonglong)(uint)puVar4[6];
    iVar3 = _BIO_write((BIO *)&switchD_00f6b486::switchdataD_00f6b5e0,data,iVar2);
    iVar2 = (int)data;
    if (0 < iVar3) {
      piVar1 = puVar4 + 6;
      *piVar1 = *piVar1 - iVar3;
      if (*piVar1 == 0) {
        puVar4[5] = 0;
        *puVar4 = 4;
      }
      else {
        puVar4[5] = puVar4[5] + iVar3;
      }
      goto switchD_00f6b486_default;
    }
    break;
  case 4:
    data = (int *)(ulonglong)(uint)puVar4[7];
    if (constructed <= (int)puVar4[7]) {
      data = piVar6;
    }
    iVar3 = _BIO_write((BIO *)&switchD_00f6b486::switchdataD_00f6b5e0,data,iVar2);
    iVar2 = (int)data;
    if (iVar3 < 1) break;
    piVar6 = (int *)(ulonglong)(uint)(constructed - iVar3);
    piVar1 = puVar4 + 7;
    *piVar1 = *piVar1 - iVar3;
    if (*piVar1 == 0) {
      *puVar4 = 2;
    }
    iVar7 = iVar7 + iVar3;
    if (constructed - iVar3 != 0) goto switchD_00f6b486_default;
    break;
  case 5:
  case 6:
    goto switchD_00f6b486_caseD_5;
  default:
    goto switchD_00f6b486_default;
  }
  _BIO_clear_flags((BIO *)b,iVar2);
  _BIO_copy_next_retry((BIO *)b);
  if (iVar7 < 1) {
    return iVar3;
  }
  return iVar7;
switchD_00f6b486_caseD_5:
  _BIO_clear_flags((BIO *)b,iVar3);
  return 0;
}


