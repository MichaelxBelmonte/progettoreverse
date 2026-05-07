// Function: FUN_00acbcf0
// Address: 00acbcf0
// Size: 931 bytes
// Class: Unknown

void FUN_00acbcf0(uint64_t param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong unaff_EBX;
  byte *arg1;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *this_ptr;
  byte *pbVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t local_48;
  byte *pbStackY_40;
  ulong in_stack_ffffffffffffffc8;
  
  bVar1 = (byte)*this_ptr;
  uVar14 = (uint64_t)bVar1;
  if ((bVar1 & 1) == 0) {
    uVar13 = (uint64_t)(bVar1 >> 1);
    lVar10 = 0x16;
  }
  else {
    uVar14 = *this_ptr;
    uVar13 = this_ptr[1];
    lVar10 = (uVar14 & 0xfffffffffffffffe) - 1;
  }
  pbVar6 = param_2 + -(int64_t)arg1;
  if (pbVar6 == (byte *)0x0) {
    return;
  }
  if ((bVar1 & 1) == 0) {
    pbVar7 = (byte *)((int64_t)this_ptr + 1);
    pbVar8 = (byte *)(uint64_t)(bVar1 >> 1);
  }
  else {
    pbVar8 = (byte *)this_ptr[1];
    pbVar7 = (byte *)this_ptr[2];
  }
  if ((pbVar7 <= arg1) && (arg1 < pbVar7 + (int64_t)pbVar8)) {
    if ((byte *)0xffffffffffffffef < pbVar6) {
                          std::__basic_string_common<true>::__throw_length_error();
    }
    if ((byte *)((int64_t)&MACH_HEADER.sizeofcmds + 2) < pbVar6) {
      pbVar7 = operator_new((ulong)pbVar8);
      uVar14 = (uint64_t)(pbVar6 + 0x10) & 0xfffffffffffffff0 | 1;
      local_48 = uVar14;
      pbStackY_40 = pbVar6;
    }
    else {
      uVar2 = (int)pbVar6 * 2;
      uVar14 = (uint64_t)uVar2;
      local_48 = CONCAT71(local_48._1_7_,(char)uVar2);
      pbVar7 = (byte *)((int64_t)&local_48 + 1);
    }
    if (arg1 != param_2) {
      if ((byte *)((int64_t)&MACH_HEADER.reserved + 3) < pbVar6) {
        pbVar8 = (byte *)((uint64_t)pbVar6 & 0xffffffffffffffe0);
        lVar10 = ((uint64_t)(pbVar8 + -0x20) >> 5) + 1;
        uVar13 = (uint64_t)((uint)lVar10 & 3);
        if ((byte *)((int64_t)&segment_command_00000020.initprot + 3) < pbVar8 + -0x20) {
          lVar10 = uVar13 - lVar10;
          lVar11 = 0;
          do {
            uVar3 = *(void*)(arg1 + lVar11 + 8);
            uVar4 = *(void*)(arg1 + lVar11 + 0x10);
            uVar5 = *(void*)(arg1 + lVar11 + 0x10 + 8);
            *(void*)(pbVar7 + lVar11) = *(void*)(arg1 + lVar11);
            *(void*)(pbVar7 + lVar11 + 8) = uVar3;
            *(void*)(pbVar7 + lVar11 + 0x10) = uVar4;
            *(void*)(pbVar7 + lVar11 + 0x10 + 8) = uVar5;
            uVar3 = *(void*)(arg1 + lVar11 + 0x20 + 8);
            uVar4 = *(void*)(arg1 + lVar11 + 0x30);
            uVar5 = *(void*)(arg1 + lVar11 + 0x30 + 8);
            *(void*)(pbVar7 + lVar11 + 0x20) = *(void*)(arg1 + lVar11 + 0x20);
            *(void*)(pbVar7 + lVar11 + 0x20 + 8) = uVar3;
            *(void*)(pbVar7 + lVar11 + 0x30) = uVar4;
            *(void*)(pbVar7 + lVar11 + 0x30 + 8) = uVar5;
            uVar3 = *(void*)(arg1 + lVar11 + 0x40 + 8);
            uVar4 = *(void*)(arg1 + lVar11 + 0x50);
            uVar5 = *(void*)(arg1 + lVar11 + 0x50 + 8);
            *(void*)(pbVar7 + lVar11 + 0x40) = *(void*)(arg1 + lVar11 + 0x40);
            *(void*)(pbVar7 + lVar11 + 0x40 + 8) = uVar3;
            *(void*)(pbVar7 + lVar11 + 0x50) = uVar4;
            *(void*)(pbVar7 + lVar11 + 0x50 + 8) = uVar5;
            uVar3 = *(void*)(arg1 + lVar11 + 0x60 + 8);
            uVar4 = *(void*)(arg1 + lVar11 + 0x70);
            uVar5 = *(void*)(arg1 + lVar11 + 0x70 + 8);
            *(void*)(pbVar7 + lVar11 + 0x60) = *(void*)(arg1 + lVar11 + 0x60);
            *(void*)(pbVar7 + lVar11 + 0x60 + 8) = uVar3;
            *(void*)(pbVar7 + lVar11 + 0x70) = uVar4;
            *(void*)(pbVar7 + lVar11 + 0x70 + 8) = uVar5;
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
            uVar3 = *(void*)(arg1 + lVar11 + -0x10 + 8);
            uVar4 = *(void*)(arg1 + lVar11);
            uVar5 = *(void*)(arg1 + lVar11 + 8);
            *(void*)(pbVar7 + lVar11 + -0x10) = *(void*)(arg1 + lVar11 + -0x10);
            *(void*)(pbVar7 + lVar11 + -0x10 + 8) = uVar3;
            *(void*)(pbVar7 + lVar11) = uVar4;
            *(void*)(pbVar7 + lVar11 + 8) = uVar5;
            lVar11 = lVar11 + 0x20;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
        }
        pbVar7 = pbVar7 + (int64_t)pbVar8;
        if (pbVar6 == pbVar8) goto LAB_00acbf60;
        arg1 = arg1 + (int64_t)pbVar8;
      }
      do {
        pbVar8 = (byte *)(uint64_t)*arg1;
        *pbVar7 = *arg1;
        arg1 = arg1 + 1;
        pbVar7 = pbVar7 + 1;
      } while (param_2 != arg1);
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
    uVar14 = (uint64_t)(byte)*this_ptr;
  }
  if ((uVar14 & 1) == 0) {
    pbVar7 = (byte *)((int64_t)this_ptr + 1);
  }
  else {
    pbVar7 = (byte *)this_ptr[2];
  }
  pbVar8 = pbVar7 + uVar13;
  if (arg1 != param_2) {
    if (((byte *)((int64_t)&MACH_HEADER.reserved + 3) < pbVar6) &&
       ((param_2 <= pbVar8 ||
        (param_2 + (uVar13 - (int64_t)arg1) + (int64_t)pbVar7 <= arg1)))) {
      pbVar12 = (byte *)((uint64_t)pbVar6 & 0xffffffffffffffe0);
      lVar10 = ((uint64_t)(pbVar12 + -0x20) >> 5) + 1;
      uVar14 = (uint64_t)((uint)lVar10 & 3);
      if ((byte *)((int64_t)&segment_command_00000020.initprot + 3) < pbVar12 + -0x20) {
        lVar10 = uVar14 - lVar10;
        lVar11 = 0;
        do {
          uVar3 = *(void*)(arg1 + lVar11 + 8);
          uVar4 = *(void*)(arg1 + lVar11 + 0x10);
          uVar5 = *(void*)(arg1 + lVar11 + 0x10 + 8);
          *(void*)(pbVar7 + lVar11 + uVar13) = *(void*)(arg1 + lVar11);
          *(void*)(pbVar7 + lVar11 + uVar13 + 8) = uVar3;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x10) = uVar4;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x10 + 8) = uVar5;
          uVar3 = *(void*)(arg1 + lVar11 + 0x20 + 8);
          uVar4 = *(void*)(arg1 + lVar11 + 0x30);
          uVar5 = *(void*)(arg1 + lVar11 + 0x30 + 8);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x20) =
               *(void*)(arg1 + lVar11 + 0x20);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x20 + 8) = uVar3;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x30) = uVar4;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x30 + 8) = uVar5;
          uVar3 = *(void*)(arg1 + lVar11 + 0x40 + 8);
          uVar4 = *(void*)(arg1 + lVar11 + 0x50);
          uVar5 = *(void*)(arg1 + lVar11 + 0x50 + 8);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x40) =
               *(void*)(arg1 + lVar11 + 0x40);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x40 + 8) = uVar3;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x50) = uVar4;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x50 + 8) = uVar5;
          uVar3 = *(void*)(arg1 + lVar11 + 0x60 + 8);
          uVar4 = *(void*)(arg1 + lVar11 + 0x70);
          uVar5 = *(void*)(arg1 + lVar11 + 0x70 + 8);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x60) =
               *(void*)(arg1 + lVar11 + 0x60);
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x60 + 8) = uVar3;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x70) = uVar4;
          *(void*)(pbVar7 + lVar11 + uVar13 + 0x70 + 8) = uVar5;
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
          uVar3 = *(void*)(arg1 + lVar11 + -0x10 + 8);
          uVar4 = *(void*)(arg1 + lVar11);
          uVar5 = *(void*)(arg1 + lVar11 + 8);
          *(void*)(pbVar8 + lVar11 + -0x10) = *(void*)(arg1 + lVar11 + -0x10);
          *(void*)(pbVar8 + lVar11 + -0x10 + 8) = uVar3;
          *(void*)(pbVar8 + lVar11) = uVar4;
          *(void*)(pbVar8 + lVar11 + 8) = uVar5;
          lVar11 = lVar11 + 0x20;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0);
      }
      pbVar8 = pbVar8 + (int64_t)pbVar12;
      if (pbVar6 == pbVar12) goto LAB_00acc060;
      arg1 = arg1 + (int64_t)pbVar12;
    }
    do {
      *pbVar8 = *arg1;
      pbVar8 = pbVar8 + 1;
      arg1 = arg1 + 1;
    } while (param_2 != arg1);
  }
LAB_00acc060:
  *pbVar8 = 0;
  if ((*this_ptr & 1) == 0) {
    *(char *)this_ptr = (char)(pbVar6 + uVar13) * '\x02';
  }
  else {
    this_ptr[1] = (uint64_t)(pbVar6 + uVar13);
  }
  return;
}

