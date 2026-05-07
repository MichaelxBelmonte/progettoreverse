// Function: FUN_009f5145
// Address: 009f5145
// Size: 1528 bytes
// Class: Unknown


longlong * FUN_009f5145(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  bad_cast *pbVar9;
  undefined1 *puVar10;
  longlong *unaff_RDI;
  int iVar11;
  bool bVar12;
  byte local_1e8;
  allocator *in_stack_fffffffffffffe28;
  byte local_1d0;
  byte local_1a8;
  byte local_190;
  bad_cast *local_158;
  byte local_140;
  longlong local_118;
  longlong local_110;
  char local_108;
  byte local_100;
  ulonglong local_e8;
  byte local_d0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  byte local_90;
  bad_cast local_8f [7];
  uint local_88;
  bad_cast *local_80;
  undefined1 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  bad_cast *local_48;
  undefined1 *local_40;
  char local_31;
  
  pcVar4 = (char *)std::string::at(param_1);
  cVar2 = *pcVar4;
  pbVar7 = (byte *)0x0;
  FUN_009f59a0(0,0);
  FUN_009ea1d0();
  local_31 = cVar2;
  FUN_009f5840();
  local_70 = 0;
  local_40 = (undefined1 *)0x0;
  iVar11 = 0;
  local_68 = 0;
  local_60 = 0;
  do {
    FUN_009f58f0();
    pvVar8 = (void *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),local_98);
    if ((local_108 == '\0') || (local_98 == '\0')) {
      bVar12 = local_108 == local_98;
    }
    else if (local_118 == local_a8) {
      bVar12 = local_110 == local_a0;
    }
    else {
      bVar12 = false;
    }
    if ((local_100 & 1) != 0) {
      operator_delete(pvVar8);
    }
    if ((local_140 & 1) != 0) {
      operator_delete(pvVar8);
    }
    if (((ulonglong)local_158 & 1) != 0) {
      operator_delete(pvVar8);
    }
    if (bVar12) {
      if ((local_90 & 1) != 0) {
        operator_delete(pvVar8);
      }
      cVar2 = local_31;
      if ((local_d0 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(pvVar8);
      }
      if (cVar2 == '-') {
        lVar5 = FUN_009a8638(local_40,local_68 & 0xffff);
        puVar10 = (undefined1 *)(lVar5 + -0x7ffffffffffffffe);
        if ((undefined1 *)((longlong)&MACH_HEADER.magic + 2) < puVar10) {
          lVar5 = -lVar5;
        }
        else {
          lVar5 = FUN_009f6358();
        }
      }
      else {
        puVar10 = local_40;
        lVar5 = FUN_009a8638(local_40,local_68 & 0xffff);
      }
      *unaff_RDI = lVar5;
      if ((local_1d0 & 1) != 0) {
        operator_delete(puVar10);
      }
      if ((local_1e8 & 1) != 0) {
        operator_delete(puVar10);
      }
      if ((local_190 & 1) != 0) {
        operator_delete(puVar10);
      }
      if ((local_1a8 & 1) != 0) {
        operator_delete(puVar10);
      }
      return unaff_RDI;
    }
    switch(iVar11) {
    case 0:
      local_58 = local_58 & 0xffffffff00000000;
      local_158 = local_80;
      if ((local_90 & 1) == 0) {
        local_158 = local_8f;
      }
      pbVar9 = local_158;
      cVar2 = FUN_009e94a0();
      if (cVar2 == '\0') {
        std::bad_cast::bad_cast(pbVar9);
        FUN_009af240();
LAB_009f573b:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_70 = local_58 & 0xffffffff;
      break;
    case 1:
      local_58 = (ulonglong)local_58._2_6_ << 0x10;
      local_158 = local_80;
      if ((local_90 & 1) == 0) {
        local_158 = local_8f;
      }
      pbVar9 = local_158;
      cVar2 = FUN_009f5cb8();
      if (cVar2 == '\0') {
        std::bad_cast::bad_cast(pbVar9);
        FUN_009af240();
        goto LAB_009f573b;
      }
      local_60 = local_58 & 0xffff;
      break;
    case 2:
      local_58 = (ulonglong)local_58._2_6_ << 0x10;
      local_158 = local_80;
      if ((local_90 & 1) == 0) {
        local_158 = local_8f;
      }
      pbVar9 = local_158;
      cVar2 = FUN_009f5cb8();
      if (cVar2 == '\0') {
        std::bad_cast::bad_cast(pbVar9);
        FUN_009af240();
        goto LAB_009f573b;
      }
      local_68 = local_58 & 0xffff;
      break;
    case 3:
      uVar3 = local_88;
      if ((local_90 & 1) == 0) {
        uVar3 = (uint)(local_90 >> 1);
      }
      if ((int)uVar3 < 6) {
        local_58 = 0;
        local_158 = local_8f;
        if ((local_90 & 1) != 0) {
          local_158 = local_80;
        }
        pbVar9 = local_158;
        cVar2 = FUN_009f5ffe();
        if (cVar2 == '\0') {
          std::bad_cast::bad_cast(pbVar9);
          FUN_009af240();
          goto LAB_009f573b;
        }
        iVar6 = uVar3 - 6;
        uVar3 = 1;
        do {
          uVar3 = uVar3 * 10;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        local_40 = (undefined1 *)(local_58 * uVar3);
      }
      else {
        std::string::string((string *)((longlong)&MACH_HEADER.cputype + 2),(string *)0x0,
                            (ulong)&local_90,param_4,in_stack_fffffffffffffe28);
        local_78 = (undefined1 *)0x0;
        local_158 = local_48;
        if ((local_58 & 1) == 0) {
          local_158 = (bad_cast *)((longlong)&local_58 + 1);
        }
        pbVar9 = local_158;
        cVar2 = FUN_009f5ffe();
        if (cVar2 == '\0') {
          std::bad_cast::bad_cast(pbVar9);
          FUN_009af240();
          goto LAB_009f573b;
        }
        local_40 = local_78;
        if ((local_58 & 1) != 0) {
          operator_delete(pbVar9);
        }
      }
    }
    pbVar7 = &local_90;
    local_98 = FUN_009f5a30(&local_90);
    iVar11 = iVar11 + 1;
  } while( true );
}


