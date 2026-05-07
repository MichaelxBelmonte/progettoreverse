// Function: FUN_01061d10
// Address: 01061d10
// Size: 1490 bytes
// Class: MUScaleBrowserItem


bool FUN_01061d10(uchar *param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  EVP_CIPHER_CTX *unaff_RSI;
  uint uVar7;
  longlong unaff_RDI;
  uint uVar8;
  uint uVar9;
  uchar *in;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *outl;
  uint uVar14;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if ((param_1 == (uchar *)0x0) || (param_3 == 0)) {
    param_3 = 0;
  }
  else {
    uVar2 = *(byte *)(unaff_RDI + 0x107) + 1;
    *(char *)(unaff_RDI + 0x107) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x106) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x106) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x105) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x105) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x104) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x104) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x103) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x103) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x102) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x101) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x100) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xff) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfe) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfe) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfd) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfd) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfc) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfc) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfb) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfb) = (char)uVar2;
    uVar2 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfa) = (char)uVar2;
    iVar3 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
    *(char *)(unaff_RDI + 0xf8) = *(char *)(unaff_RDI + 0xf8) + (char)((uint)iVar3 >> 8);
    iVar3 = FUN_01062340(0,param_3,0,0);
    if (iVar3 == 0) {
      return false;
    }
    if ((*(byte *)(unaff_RDI + 0x1c) & 1) == 0) {
      param_3 = 1;
      param_1 = (uchar *)0x0;
    }
  }
  uVar12 = *(byte *)(unaff_RDI + 0x107) + 1;
  *(char *)(unaff_RDI + 0x107) = (char)uVar12;
  uVar11 = (uint)*(byte *)(unaff_RDI + 0x106) + (uVar12 >> 8);
  *(char *)(unaff_RDI + 0x106) = (char)uVar11;
  uVar10 = (uint)*(byte *)(unaff_RDI + 0x105) + (uVar11 >> 8);
  *(char *)(unaff_RDI + 0x105) = (char)uVar10;
  uVar9 = (uint)*(byte *)(unaff_RDI + 0x104) + (uVar10 >> 8);
  *(char *)(unaff_RDI + 0x104) = (char)uVar9;
  uVar8 = (uint)*(byte *)(unaff_RDI + 0x103) + (uVar9 >> 8);
  *(char *)(unaff_RDI + 0x103) = (char)uVar8;
  uVar4 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar8 >> 8);
  *(char *)(unaff_RDI + 0x102) = (char)uVar4;
  uVar2 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar4 >> 8);
  *(char *)(unaff_RDI + 0x101) = (char)uVar2;
  uVar14 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar2 >> 8);
  *(char *)(unaff_RDI + 0x100) = (char)uVar14;
  local_4c = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar14 >> 8);
  *(char *)(unaff_RDI + 0xff) = (char)local_4c;
  local_50 = (uint)*(byte *)(unaff_RDI + 0xfe) + (local_4c >> 8);
  *(char *)(unaff_RDI + 0xfe) = (char)local_50;
  local_54 = (uint)*(byte *)(unaff_RDI + 0xfd) + (local_50 >> 8);
  *(char *)(unaff_RDI + 0xfd) = (char)local_54;
  local_58 = (uint)*(byte *)(unaff_RDI + 0xfc) + (local_54 >> 8);
  *(char *)(unaff_RDI + 0xfc) = (char)local_58;
  uVar5 = (uint)*(byte *)(unaff_RDI + 0xfb) + (local_58 >> 8);
  *(char *)(unaff_RDI + 0xfb) = (char)uVar5;
  uVar7 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar5 >> 8);
  *(char *)(unaff_RDI + 0xfa) = (char)uVar7;
  uVar6 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar7 >> 8);
  *(char *)(unaff_RDI + 0xf9) = (char)uVar6;
  cVar1 = (char)(uVar6 >> 8) + *(char *)(unaff_RDI + 0xf8);
  *(char *)(unaff_RDI + 0xf8) = cVar1;
  if (param_2 == 0) {
    uVar12 = (uVar12 & 0xff) + 1;
    *(char *)(unaff_RDI + 0x107) = (char)uVar12;
    uVar11 = (uVar11 & 0xff) + (uVar12 >> 8);
    *(char *)(unaff_RDI + 0x106) = (char)uVar11;
    uVar10 = (uVar10 & 0xff) + (uVar11 >> 8);
    *(char *)(unaff_RDI + 0x105) = (char)uVar10;
    uVar9 = (uVar9 & 0xff) + (uVar10 >> 8);
    *(char *)(unaff_RDI + 0x104) = (char)uVar9;
    uVar8 = (uVar8 & 0xff) + (uVar9 >> 8);
    *(char *)(unaff_RDI + 0x103) = (char)uVar8;
    uVar4 = (uVar4 & 0xff) + (uVar8 >> 8);
    *(char *)(unaff_RDI + 0x102) = (char)uVar4;
    uVar2 = (uVar2 & 0xff) + (uVar4 >> 8);
    *(char *)(unaff_RDI + 0x101) = (char)uVar2;
    uVar2 = (uVar14 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0x100) = (char)uVar2;
    uVar2 = (local_4c & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xff) = (char)uVar2;
    uVar2 = (local_50 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfe) = (char)uVar2;
    uVar2 = (local_54 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfd) = (char)uVar2;
    uVar2 = (local_58 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfc) = (char)uVar2;
    uVar2 = (uVar5 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfb) = (char)uVar2;
    uVar2 = (uVar7 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xfa) = (char)uVar2;
    iVar3 = (uVar6 & 0xff) + (uVar2 >> 8);
    *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
    *(char *)(unaff_RDI + 0xf8) = cVar1 + (char)((uint)iVar3 >> 8);
  }
  else {
    ___bzero();
    do {
      in = (uchar *)0xffffffff;
      iVar3 = _EVP_CipherInit_ex((EVP_CIPHER_CTX *)0x0,(EVP_CIPHER *)0x0,
                                 (ENGINE *)(unaff_RDI + 0xf8),(uchar *)0xffffffff,param_1,
                                 (int)param_3);
      if (iVar3 == 0) {
        return false;
      }
      outl = (int *)0x40000000;
      if (param_2 < 0x40000000) {
        outl = (int *)(param_2 & 0xffffffff);
      }
      uVar4 = (uint)outl + 0xf >> 4;
      uVar2 = *(uint *)(unaff_RDI + 0x104);
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar5 = uVar4 + uVar2;
      if (CARRY4(uVar4,uVar2)) {
        uVar2 = uVar2 * -0x10;
        if (uVar5 == 0) {
          uVar2 = (uint)outl;
        }
        uVar4 = *(byte *)(unaff_RDI + 0x103) + 1;
        *(char *)(unaff_RDI + 0x103) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x102) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x101) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0x100) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xff) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfe) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfe) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfd) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfd) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfc) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfc) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfb) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfb) = (char)uVar4;
        uVar4 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xfa) = (char)uVar4;
        iVar3 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar4 >> 8);
        *(char *)(unaff_RDI + 0xf9) = (char)iVar3;
        *(char *)(unaff_RDI + 0xf8) = *(char *)(unaff_RDI + 0xf8) + (char)((uint)iVar3 >> 8);
        uVar5 = 0;
        outl = (int *)(ulonglong)uVar2;
      }
      *(uint *)(unaff_RDI + 0x104) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      iVar13 = (int)outl;
      iVar3 = _EVP_CipherUpdate(unaff_RSI,(uchar *)&local_5c,outl,in,(int)param_1);
      if (iVar3 == 0) {
        return false;
      }
      if (local_5c != iVar13) {
        return false;
      }
      unaff_RSI = (EVP_CIPHER_CTX *)(unaff_RSI->oiv + (longlong)iVar13 + -0x18);
      param_2 = param_2 - (longlong)iVar13;
    } while (param_2 != 0);
  }
  iVar3 = FUN_01062340(0,param_3,0,0);
  return iVar3 != 0;
}


