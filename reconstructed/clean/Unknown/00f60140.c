// Function: FUN_00f60140
// Address: 00f60140
// Size: 658 bytes
// Class: Unknown

uint64_t FUN_00f60140(code *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  code *str;
  uchar *str_00;
  int64_t lVar4;
  uint unaff_ESI;
  uint uVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t local_38;
  
  if (unaff_ESI == 0) {
    return 1;
  }
  if (param_2 == 0x1001) {
    if (param_1 == 0x0) {
      uVar2 = unaff_ESI - 1;
      if ((unaff_ESI & 7) != 0) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
        } while ((unaff_ESI & 7) != uVar5);
        unaff_ESI = unaff_ESI - uVar5;
      }
      if (6 < uVar2) {
        do {
          unaff_ESI = unaff_ESI - 8;
        } while (unaff_ESI != 0);
        return 1;
      }
      return 1;
    }
    uVar2 = 0;
    do {
      uVar3 = (*param_1)();
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      uVar2 = uVar2 + 1;
    } while (unaff_ESI != uVar2);
  }
  else if (param_2 == 0x1002) {
    if (param_1 == 0x0) {
      uVar5 = unaff_ESI - 2;
      uVar2 = uVar5 >> 1;
      if ((uVar2 + 1 & 3) != 0) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 2;
        } while (((byte)((char)uVar2 + 1) & 3) * 2 != iVar1);
        unaff_ESI = unaff_ESI - iVar1;
      }
      if (5 < uVar5) {
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 8;
        } while (unaff_ESI != uVar2);
        return 1;
      }
      return 1;
    }
    lVar4 = 0;
    do {
      uVar6 = (uint64_t)*(ushort *)(this_ptr + lVar4) << 0x30;
      local_38 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28;
      uVar3 = (*param_1)();
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      lVar4 = lVar4 + 2;
    } while (unaff_ESI != (uint)lVar4);
  }
  else if (param_2 == 0x1004) {
    lVar4 = 0;
    do {
      local_38 = (uint64_t)*(byte *)(this_ptr + 3 + lVar4) |
                 (uint64_t)*(byte *)(this_ptr + 2 + lVar4) << 8 |
                 (uint64_t)*(byte *)(this_ptr + 1 + lVar4) << 0x10 |
                 (uint64_t)*(byte *)(this_ptr + lVar4) << 0x18;
      if ((param_1 != 0x0) && (uVar3 = (*param_1)(), (int)uVar3 < 1)) {
        return uVar3;
      }
      lVar4 = lVar4 + 4;
    } while (unaff_ESI != (uint)lVar4);
  }
  else {
    str = param_1;
    if (param_1 == 0x0) {
      str_00 = (uchar *)0x0;
      do {
        uVar2 = _UTF8_getc(str_00,(int)&local_38,param_3);
        if ((int)uVar2 < 0) {
          return 0xffffffff;
        }
        str_00 = (uchar *)(uint64_t)uVar2;
        unaff_ESI = unaff_ESI - uVar2;
      } while (unaff_ESI != 0);
    }
    else {
      do {
        iVar1 = _UTF8_getc((uchar *)str,(int)&local_38,param_3);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
        uVar3 = (*param_1)();
        if ((int)uVar3 < 1) {
          return uVar3;
        }
        unaff_ESI = unaff_ESI - iVar1;
      } while (unaff_ESI != 0);
    }
  }
  return 1;
}

