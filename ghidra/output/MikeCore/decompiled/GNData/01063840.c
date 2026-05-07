// Function: FUN_01063840
// Address: 01063840
// Size: 548 bytes
// Class: GNData


undefined8 FUN_01063840(void *param_1,undefined1 *param_2,size_t param_3,uchar *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined1 *puVar7;
  segment_command *psVar8;
  size_t local_6c;
  undefined8 local_68;
  undefined8 uStackY_60;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((unaff_RSI != (undefined8 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    if ((*(longlong *)(unaff_RDI + 0x70) != 0) &&
       (puVar7 = (undefined1 *)(0x10 - *(longlong *)(unaff_RDI + 0x70)), puVar7 <= param_2)) {
      _memcpy(param_1,puVar7,param_3);
      uVar6 = *(undefined8 *)(unaff_RDI + 0x60);
      uVar2 = *(undefined8 *)(unaff_RDI + 0x68);
      psVar8 = &segment_command_00000020;
      if (*(longlong *)(unaff_RDI + 0x28) != 0x10) {
        local_48 = *(undefined8 *)(unaff_RDI + 0x60);
        uStack_40 = *(undefined8 *)(unaff_RDI + 0x68);
        psVar8 = (segment_command *)(segment_command_00000020.segname + 8);
      }
      local_6c = 0x10;
      local_68._0_4_ = (uint)uVar6;
      local_68._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
      uStackY_60._0_4_ = (uint)uVar2;
      uStackY_60._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
      *(uint *)(unaff_RDI + 0x78) = *(uint *)(unaff_RDI + 0x78) ^ (uint)local_68;
      *(uint *)(unaff_RDI + 0x7c) = *(uint *)(unaff_RDI + 0x7c) ^ local_68._4_4_;
      *(uint *)(unaff_RDI + 0x80) = *(uint *)(unaff_RDI + 0x80) ^ (uint)uStackY_60;
      *(uint *)(unaff_RDI + 0x84) = *(uint *)(unaff_RDI + 0x84) ^ uStackY_60._4_4_;
      uVar5 = (uint)*(undefined8 *)(unaff_RDI + 0x60);
      uStack_54 = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 0x60) >> 0x20);
      uStack_50 = (uint)*(undefined8 *)(unaff_RDI + 0x68);
      uStack_4c = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 0x68) >> 0x20);
      *(uint *)(unaff_RDI + 0x88) = *(uint *)(unaff_RDI + 0x88) ^ uVar5;
      *(uint *)(unaff_RDI + 0x8c) = *(uint *)(unaff_RDI + 0x8c) ^ uStack_54;
      *(uint *)(unaff_RDI + 0x90) = *(uint *)(unaff_RDI + 0x90) ^ uStack_50;
      *(uint *)(unaff_RDI + 0x94) = *(uint *)(unaff_RDI + 0x94) ^ uStack_4c;
      if (*(longlong *)(unaff_RDI + 0x28) != 0x10) {
        *(uint *)(unaff_RDI + 0x98) = *(uint *)(unaff_RDI + 0x98) ^ (uint)local_48;
        *(uint *)(unaff_RDI + 0x9c) = *(uint *)(unaff_RDI + 0x9c) ^ local_48._4_4_;
        *(uint *)(unaff_RDI + 0xa0) = *(uint *)(unaff_RDI + 0xa0) ^ (uint)uStack_40;
        *(uint *)(unaff_RDI + 0xa4) = *(uint *)(unaff_RDI + 0xa4) ^ uStack_40._4_4_;
      }
      param_3 = (size_t)psVar8;
      local_68 = uVar6;
      uStackY_60 = uVar2;
      uVar5 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(unaff_RDI + 0x78),(uchar *)&local_6c,
                                (int *)psVar8,param_4,uVar5);
      param_1 = (void *)(ulonglong)uVar5;
      uVar6 = 0;
      if ((uVar5 == 0) || (local_6c != (size_t)psVar8)) goto LAB_01063a40;
      *(undefined8 *)(unaff_RDI + 0x70) = 0;
      param_2 = param_2 + -(longlong)puVar7;
      unaff_RSI = (undefined8 *)((longlong)unaff_RSI + (longlong)puVar7);
    }
    if ((undefined1 *)((longlong)&MACH_HEADER.filetype + 3) < param_2) {
      do {
        uVar6 = *unaff_RSI;
        uVar2 = unaff_RSI[1];
        uVar3 = *unaff_RSI;
        uVar4 = unaff_RSI[1];
        psVar8 = &segment_command_00000020;
        if (*(longlong *)(unaff_RDI + 0x28) != 0x10) {
          local_48 = *unaff_RSI;
          uStack_40 = unaff_RSI[1];
          psVar8 = (segment_command *)(segment_command_00000020.segname + 8);
        }
        local_6c = 0x10;
        local_68._0_4_ = (uint)uVar6;
        local_68._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
        uStackY_60._0_4_ = (uint)uVar2;
        uStackY_60._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
        *(uint *)(unaff_RDI + 0x78) = *(uint *)(unaff_RDI + 0x78) ^ (uint)local_68;
        *(uint *)(unaff_RDI + 0x7c) = *(uint *)(unaff_RDI + 0x7c) ^ local_68._4_4_;
        *(uint *)(unaff_RDI + 0x80) = *(uint *)(unaff_RDI + 0x80) ^ (uint)uStackY_60;
        *(uint *)(unaff_RDI + 0x84) = *(uint *)(unaff_RDI + 0x84) ^ uStackY_60._4_4_;
        uVar5 = (uint)uVar3;
        uStack_54 = (uint)((ulonglong)uVar3 >> 0x20);
        uStack_50 = (uint)uVar4;
        uStack_4c = (uint)((ulonglong)uVar4 >> 0x20);
        *(uint *)(unaff_RDI + 0x88) = *(uint *)(unaff_RDI + 0x88) ^ uVar5;
        *(uint *)(unaff_RDI + 0x8c) = *(uint *)(unaff_RDI + 0x8c) ^ uStack_54;
        *(uint *)(unaff_RDI + 0x90) = *(uint *)(unaff_RDI + 0x90) ^ uStack_50;
        *(uint *)(unaff_RDI + 0x94) = *(uint *)(unaff_RDI + 0x94) ^ uStack_4c;
        if (*(longlong *)(unaff_RDI + 0x28) != 0x10) {
          *(uint *)(unaff_RDI + 0x98) = *(uint *)(unaff_RDI + 0x98) ^ (uint)local_48;
          *(uint *)(unaff_RDI + 0x9c) = *(uint *)(unaff_RDI + 0x9c) ^ local_48._4_4_;
          *(uint *)(unaff_RDI + 0xa0) = *(uint *)(unaff_RDI + 0xa0) ^ (uint)uStack_40;
          *(uint *)(unaff_RDI + 0xa4) = *(uint *)(unaff_RDI + 0xa4) ^ uStack_40._4_4_;
        }
        param_3 = (size_t)psVar8;
        local_68 = uVar6;
        uStackY_60 = uVar2;
        uVar5 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(unaff_RDI + 0x78),(uchar *)&local_6c,
                                  (int *)psVar8,param_4,uVar5);
        param_1 = (void *)(ulonglong)uVar5;
        uVar6 = 0;
        if ((uVar5 == 0) || (local_6c != (size_t)psVar8)) goto LAB_01063a40;
        unaff_RSI = unaff_RSI + 2;
        param_2 = param_2 + -0x10;
      } while ((undefined1 *)((longlong)&MACH_HEADER.filetype + 3) < param_2);
    }
    if (param_2 != (undefined1 *)0x0) {
      _memcpy(param_1,param_2,param_3);
      *(longlong *)(unaff_RDI + 0x70) = (longlong)(param_2 + *(longlong *)(unaff_RDI + 0x70));
    }
  }
  uVar6 = 1;
LAB_01063a40:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


