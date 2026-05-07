// Function: FUN_00acbcf0
// Address: 00acbcf0
// Size: 931 bytes
// Class: Unknown


void FUN_00acbcf0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong unaff_EBX;
  byte *unaff_RSI;
  longlong lVar10;
  longlong lVar11;
  ulonglong *unaff_RDI;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 local_48;
  byte *pbStackY_40;
  ulong in_stack_ffffffffffffffc8;
  
  bVar1 = (byte)*unaff_RDI;
  uVar14 = (ulonglong)bVar1;
  if ((bVar1 & 1) == 0) {
    uVar13 = (ulonglong)(bVar1 >> 1);
    lVar10 = 0x16;
  }
  else {
    uVar14 = *unaff_RDI;
    uVar13 = unaff_RDI[1];
    lVar10 = (uVar14 & 0xfffffffffffffffe) - 1;
  }
  pbVar6 = param_2 + -(longlong)unaff_RSI;
  if (pbVar6 == (byte *)0x0) {
    return;
  }
  if ((bVar1 & 1) == 0) {
    pbVar7 = (byte *)((longlong)unaff_RDI + 1);
    pbVar8 = (byte *)(ulonglong)(bVar1 >> 1);
  }
  else {
    pbVar8 = (byte *)unaff_RDI[1];
    pbVar7 = (byte *)unaff_RDI[2];
  }
  if ((pbVar7 <= unaff_RSI) && (unaff_RSI < pbVar7 + (longlong)pbVar8)) {
    if ((byte *)0xffffffffffffffef < pbVar6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((byte *)((longlong)&MACH_HEADER.sizeofcmds + 2) < pbVar6) {
      pbVar7 = operator_new((ulong)pbVar8);
      uVar14 = (ulonglong)(pbVar6 + 0x10) & 0xfffffffffffffff0 | 1;
      local_48 = uVar14;
      pbStackY_40 = pbVar6;
    }
    else {
      uVar2 = (int)pbVar6 * 2;
      uVar14 = (ulonglong)uVar2;
      local_48 = CONCAT71(local_48._1_7_,(char)uVar2);
      pbVar7 = (byte *)((longlong)&local_48 + 1);
    }
    if (unaff_RSI != param_2) {
      if ((byte *)((longlong)&MACH_HEADER.reserved + 3) < pbVar6) {
        pbVar8 = (byte *)((ulonglong)pbVar6 & 0xffffffffffffffe0);
        lVar10 = ((ulonglong)(pbVar8 + -0x20) >> 5) + 1;
        uVar13 = (ulonglong)((uint)lVar10 & 3);
        if ((byte *)((longlong)&segment_command_00000020.initprot + 3) < pbVar8 + -0x20) {
          lVar10 = uVar13 - lVar10;
          lVar11 = 0;
          do {
            uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 8);
            uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x10);
            uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x10 + 8);
            *(undefined8 *)(pbVar7 + lVar11) = *(undefined8 *)(unaff_RSI + lVar11);
            *(undefined8 *)(pbVar7 + lVar11 + 8) = uVar3;
            *(undefined8 *)(pbVar7 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)(pbVar7 + lVar11 + 0x10 + 8) = uVar5;
            uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x20 + 8);
            uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x30);
            uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x30 + 8);
            *(undefined8 *)(pbVar7 + lVar11 + 0x20) = *(undefined8 *)(unaff_RSI + lVar11 + 0x20);
            *(undefined8 *)(pbVar7 + lVar11 + 0x20 + 8) = uVar3;
            *(undefined8 *)(pbVar7 + lVar11 + 0x30) = uVar4;
            *(undefined8 *)(pbVar7 + lVar11 + 0x30 + 8) = uVar5;
            uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x40 + 8);
            uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x50);
            uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x50 + 8);
            *(undefined8 *)(pbVar7 + lVar11 + 0x40) = *(undefined8 *)(unaff_RSI + lVar11 + 0x40);
            *(undefined8 *)(pbVar7 + lVar11 + 0x40 + 8) = uVar3;
            *(undefined8 *)(pbVar7 + lVar11 + 0x50) = uVar4;
            *(undefined8 *)(pbVar7 + lVar11 + 0x50 + 8) = uVar5;
            uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x60 + 8);
            uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x70);
            uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x70 + 8);
            *(undefined8 *)(pbVar7 + lVar11 + 0x60) = *(undefined8 *)(unaff_RSI + lVar11 + 0x60);
            *(undefined8 *)(pbVar7 + lVar11 + 0x60 + 8) = uVar3;
            *(undefined8 *)(pbVar7 + lVar11 + 0x70) = uVar4;
            *(undefined8 *)(pbVar7 + lVar11 + 0x70 + 8) = uVar5;
            lVar11 = lVar11 + 0x80;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0);
        }
        else {
          lVar11 = 0;
        }
        if (uVar13 != 0) {
          lVar11 = lVar11 + 0x10;
          lVar10 = -uVar13;
          do {
            uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + -0x10 + 8);
            uVar4 = *(undefined8 *)(unaff_RSI + lVar11);
            uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 8);
            *(undefined8 *)(pbVar7 + lVar11 + -0x10) = *(undefined8 *)(unaff_RSI + lVar11 + -0x10);
            *(undefined8 *)(pbVar7 + lVar11 + -0x10 + 8) = uVar3;
            *(undefined8 *)(pbVar7 + lVar11) = uVar4;
            *(undefined8 *)(pbVar7 + lVar11 + 8) = uVar5;
            lVar11 = lVar11 + 0x20;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
        pbVar7 = pbVar7 + (longlong)pbVar8;
        if (pbVar6 == pbVar8) goto LAB_00acbf60;
        unaff_RSI = unaff_RSI + (longlong)pbVar8;
      }
      do {
        pbVar8 = (byte *)(ulonglong)*unaff_RSI;
        *pbVar7 = *unaff_RSI;
        unaff_RSI = unaff_RSI + 1;
        pbVar7 = pbVar7 + 1;
      } while (param_2 != unaff_RSI);
    }
LAB_00acbf60:
    *pbVar7 = 0;
    if ((uVar14 & 1) == 0) {
      uVar9 = (ulong)(byte)((byte)uVar14 >> 1);
    }
    else {
      uVar9 = (ulong)pbStackY_40;
    }
    std::string::append((char *)pbVar8,uVar9);
    if ((local_48 & 1) == 0) {
      return;
    }
    operator_delete(pbVar8);
    return;
  }
  if ((byte *)(lVar10 - uVar13) < pbVar6) {
    uVar9 = (ulong)uVar13;
    std::string::__grow_by
              (uVar9,(uVar9 + (int)pbVar6) - (int)lVar10,uVar9,0,in_stack_ffffffffffffffc8,unaff_EBX
              );
    uVar14 = (ulonglong)(byte)*unaff_RDI;
  }
  if ((uVar14 & 1) == 0) {
    pbVar7 = (byte *)((longlong)unaff_RDI + 1);
  }
  else {
    pbVar7 = (byte *)unaff_RDI[2];
  }
  pbVar8 = pbVar7 + uVar13;
  if (unaff_RSI != param_2) {
    if (((byte *)((longlong)&MACH_HEADER.reserved + 3) < pbVar6) &&
       ((param_2 <= pbVar8 ||
        (param_2 + (uVar13 - (longlong)unaff_RSI) + (longlong)pbVar7 <= unaff_RSI)))) {
      pbVar12 = (byte *)((ulonglong)pbVar6 & 0xffffffffffffffe0);
      lVar10 = ((ulonglong)(pbVar12 + -0x20) >> 5) + 1;
      uVar14 = (ulonglong)((uint)lVar10 & 3);
      if ((byte *)((longlong)&segment_command_00000020.initprot + 3) < pbVar12 + -0x20) {
        lVar10 = uVar14 - lVar10;
        lVar11 = 0;
        do {
          uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 8);
          uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x10);
          uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x10 + 8);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13) = *(undefined8 *)(unaff_RSI + lVar11);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 8) = uVar3;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x10) = uVar4;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x10 + 8) = uVar5;
          uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x20 + 8);
          uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x30);
          uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x30 + 8);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x20) =
               *(undefined8 *)(unaff_RSI + lVar11 + 0x20);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x20 + 8) = uVar3;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x30) = uVar4;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x30 + 8) = uVar5;
          uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x40 + 8);
          uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x50);
          uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x50 + 8);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x40) =
               *(undefined8 *)(unaff_RSI + lVar11 + 0x40);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x40 + 8) = uVar3;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x50) = uVar4;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x50 + 8) = uVar5;
          uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + 0x60 + 8);
          uVar4 = *(undefined8 *)(unaff_RSI + lVar11 + 0x70);
          uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 0x70 + 8);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x60) =
               *(undefined8 *)(unaff_RSI + lVar11 + 0x60);
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x60 + 8) = uVar3;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x70) = uVar4;
          *(undefined8 *)(pbVar7 + lVar11 + uVar13 + 0x70 + 8) = uVar5;
          lVar11 = lVar11 + 0x80;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0);
      }
      else {
        lVar11 = 0;
      }
      if (uVar14 != 0) {
        lVar11 = lVar11 + 0x10;
        lVar10 = -uVar14;
        do {
          uVar3 = *(undefined8 *)(unaff_RSI + lVar11 + -0x10 + 8);
          uVar4 = *(undefined8 *)(unaff_RSI + lVar11);
          uVar5 = *(undefined8 *)(unaff_RSI + lVar11 + 8);
          *(undefined8 *)(pbVar8 + lVar11 + -0x10) = *(undefined8 *)(unaff_RSI + lVar11 + -0x10);
          *(undefined8 *)(pbVar8 + lVar11 + -0x10 + 8) = uVar3;
          *(undefined8 *)(pbVar8 + lVar11) = uVar4;
          *(undefined8 *)(pbVar8 + lVar11 + 8) = uVar5;
          lVar11 = lVar11 + 0x20;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0);
      }
      pbVar8 = pbVar8 + (longlong)pbVar12;
      if (pbVar6 == pbVar12) goto LAB_00acc060;
      unaff_RSI = unaff_RSI + (longlong)pbVar12;
    }
    do {
      *pbVar8 = *unaff_RSI;
      pbVar8 = pbVar8 + 1;
      unaff_RSI = unaff_RSI + 1;
    } while (param_2 != unaff_RSI);
  }
LAB_00acc060:
  *pbVar8 = 0;
  if ((*unaff_RDI & 1) == 0) {
    *(char *)unaff_RDI = (char)(pbVar6 + uVar13) * '\x02';
  }
  else {
    unaff_RDI[1] = (ulonglong)(pbVar6 + uVar13);
  }
  return;
}


