// Function: FUN_010a39d0
// Address: 010a39d0
// Size: 674 bytes
// Class: Unknown
// String references:
//   "crypto/ui/ui_lib.c"


int FUN_010a39d0(char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int func;
  undefined8 uVar6;
  longlong unaff_RSI;
  void *unaff_RDI;
  int reason;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 unaff_R12;
  char *pcVar11;
  int local_res8;
  longlong local_res10;
  
  uVar10 = (undefined4)((ulonglong)param_4 >> 0x20);
  iVar9 = (int)param_4;
  iVar2 = (int)unaff_R12;
  if (param_1 == (char *)0x0) {
    func = 0x43;
    reason = 0xa0;
LAB_010a3bf0:
    _ERR_put_error(0x201cb5f,func,reason,(char *)CONCAT44(uVar10,iVar9),iVar2);
    return -1;
  }
  if (param_3 == 0) {
    func = 0x43;
    reason = 0xa2;
    goto LAB_010a3bf0;
  }
  cVar1 = *param_1;
  pcVar5 = param_1;
  pcVar11 = param_1;
  lVar7 = param_3;
  uVar6 = param_2;
  iVar8 = iVar9;
  while (cVar1 != '\0') {
    pcVar11 = pcVar11 + 1;
    pcVar3 = _strchr(pcVar5,(int)uVar6);
    if (pcVar3 != (char *)0x0) {
      uVar6 = 0x68;
      pcVar5 = "crypto/ui/ui_lib.c";
      lVar7 = 0xa7;
      _ERR_put_error(0x201cb5f,0x68,0xa7,(char *)CONCAT44(uVar10,iVar8),(int)unaff_R12);
    }
    iVar2 = (int)unaff_R12;
    cVar1 = *pcVar11;
  }
  if (unaff_RSI == 0) {
    func = 0x43;
    reason = 0x69;
    iVar9 = iVar8;
    goto LAB_010a3bf0;
  }
  if (local_res10 == 0) {
    func = 0x69;
    reason = 0x6c;
    iVar9 = iVar8;
    goto LAB_010a3bf0;
  }
  piVar4 = _CRYPTO_malloc((int)pcVar5,section_00000068.sectname + 5,(int)lVar7);
  iVar2 = -1;
  if (piVar4 == (int *)0x0) {
    return -1;
  }
  *(longlong *)(piVar4 + 2) = unaff_RSI;
  piVar4[0x10] = (uint)(iVar9 != 0);
  piVar4[4] = local_res8;
  *piVar4 = 3;
  *(longlong *)(piVar4 + 6) = local_res10;
  if (*(longlong *)((longlong)unaff_RDI + 8) == 0) {
    lVar7 = _OPENSSL_sk_new_null();
    *(longlong *)((longlong)unaff_RDI + 8) = lVar7;
    if (lVar7 == 0) {
      if (((*(byte *)(piVar4 + 0x10) & 1) != 0) && (_CRYPTO_free(unaff_RDI), *piVar4 == 3)) {
        _CRYPTO_free(unaff_RDI);
        _CRYPTO_free(unaff_RDI);
        _CRYPTO_free(unaff_RDI);
      }
      goto LAB_010a3b61;
    }
  }
  *(undefined8 *)(piVar4 + 10) = param_2;
  *(char **)(piVar4 + 0xc) = param_1;
  *(longlong *)(piVar4 + 0xe) = param_3;
  iVar2 = _OPENSSL_sk_push();
  if (0 < iVar2) {
    return iVar2;
  }
  if (((*(byte *)(piVar4 + 0x10) & 1) != 0) && (_CRYPTO_free(unaff_RDI), *piVar4 == 3)) {
    _CRYPTO_free(unaff_RDI);
    _CRYPTO_free(unaff_RDI);
    _CRYPTO_free(unaff_RDI);
  }
  iVar2 = iVar2 + -1;
LAB_010a3b61:
  _CRYPTO_free(unaff_RDI);
  return iVar2;
}


