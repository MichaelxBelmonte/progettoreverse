// Function: FUN_00970288
// Address: 00970288
// Size: 555 bytes
// Class: Unknown


undefined4 FUN_00970288(char *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar10;
  undefined8 local_38;
  
  if (0x500 < param_2) {
    return 99;
  }
  if (unaff_RDI == 0) {
    return 99;
  }
  if (unaff_RSI == 0) {
    return 99;
  }
  if (param_1 != (char *)0x0) {
    local_38 = in_RAX;
    FUN_009740e6(param_1,0x80);
    lVar7 = FUN_0096e5e3(4,param_2,&local_38,(longlong)&local_38 + 4);
    if (lVar7 != 0) {
      lVar7 = FUN_0096e5e3(2,local_38._4_4_);
      if ((lVar7 != 0) && (0xb < local_38._4_4_)) {
        lVar5 = lVar7 + 1;
        if (*(char *)(lVar7 + (local_38 & 0xffffffff)) != '\0') {
          lVar5 = lVar7;
        }
        pcVar8 = (char *)(lVar5 + (local_38 & 0xffffffff));
        cVar2 = *pcVar8;
        *param_1 = cVar2;
        param_1[1] = pcVar8[1];
        bVar3 = pcVar8[2];
        param_1[2] = bVar3;
        bVar4 = pcVar8[3];
        param_1[3] = bVar4;
        lVar7 = 0;
        uVar9 = 0;
        do {
          uVar9 = (uint)(byte)pcVar8[lVar7 + 4] | uVar9 << 8;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 != 4);
        *(uint *)(param_1 + 4) = uVar9;
        lVar7 = 0;
        uVar9 = 0;
        do {
          uVar9 = (uint)(byte)pcVar8[lVar7 + 8] | uVar9 << 8;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 != 4);
        *(uint *)(param_1 + 8) = uVar9;
        if (cVar2 < '\x01') {
          return 0x156;
        }
        if (8 < bVar3) {
          return 0x16e;
        }
        if (8 < bVar4) {
          return 0x16d;
        }
        if (local_38._4_4_ - 0xc < (uint)bVar3 * 4 + ((uint)bVar4 + (uint)bVar4 * 4) * 2) {
          return 0x16c;
        }
        pcVar8 = pcVar8 + 0xc;
        if (bVar3 != 0) {
          uVar10 = 0;
          do {
            lVar7 = 0;
            uVar9 = 0;
            do {
              uVar9 = (uint)(byte)pcVar8[lVar7] | uVar9 << 8;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 != 4);
            *(uint *)(param_1 + uVar10 * 4 + 0xc) = uVar9;
            pcVar8 = pcVar8 + 4;
            uVar10 = uVar10 + 1;
          } while (uVar10 != bVar3);
        }
        if (bVar4 != 0) {
          uVar10 = 0;
          do {
            lVar7 = 0;
            uVar9 = 0;
            do {
              uVar9 = (uint)(byte)pcVar8[lVar7] | uVar9 << 8;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 != 4);
            *(uint *)(param_1 + uVar10 * 4 + 0x2c) = uVar9;
            uVar9 = 0;
            lVar7 = 4;
            do {
              uVar9 = (uint)(byte)pcVar8[lVar7] | uVar9 << 8;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 != 8);
            *(uint *)(param_1 + uVar10 * 4 + 0x4c) = uVar9;
            param_1[uVar10 + 0x6c] = pcVar8[8];
            pcVar1 = pcVar8 + 9;
            pcVar8 = pcVar8 + 10;
            param_1[uVar10 + 0x74] = *pcVar1;
            uVar10 = uVar10 + 1;
          } while (uVar10 != bVar4);
        }
      }
    }
    uVar6 = 0;
    if (*param_1 == '\0') {
      uVar6 = 0x16c;
    }
    return uVar6;
  }
  return 99;
}


