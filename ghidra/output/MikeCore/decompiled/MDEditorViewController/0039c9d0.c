// Function: FUN_0039c9d0
// Address: 0039c9d0
// Size: 4558 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x0039db00) */
/* WARNING: Removing unreachable block (ram,0x0039d946) */
/* WARNING: Removing unreachable block (ram,0x0039d94b) */
/* WARNING: Removing unreachable block (ram,0x0039d42c) */
/* WARNING: Removing unreachable block (ram,0x0039d435) */
/* WARNING: Removing unreachable block (ram,0x0039cd90) */
/* WARNING: Removing unreachable block (ram,0x0039cd9c) */
/* WARNING: Removing unreachable block (ram,0x0039d122) */
/* WARNING: Removing unreachable block (ram,0x0039d12e) */
/* WARNING: Removing unreachable block (ram,0x0039d81d) */
/* WARNING: Removing unreachable block (ram,0x0039d826) */
/* WARNING: Removing unreachable block (ram,0x0039da5b) */
/* WARNING: Removing unreachable block (ram,0x0039da64) */
/* WARNING: Removing unreachable block (ram,0x0039db6f) */
/* WARNING: Removing unreachable block (ram,0x0039db78) */
/* WARNING: Removing unreachable block (ram,0x0039d243) */
/* WARNING: Removing unreachable block (ram,0x0039d250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039c9d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong **pplVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  pthread_key_t pVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  bool bVar15;
  undefined8 uVar16;
  double dVar17;
  longlong local_128;
  ulonglong local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *in_stack_ffffffffffffffb8;
  char local_40;
  
  iVar7 = FUN_01d3a5a0();
  if (iVar7 == 1) {
    FUN_01f27fe0();
    bVar5 = (**(code **)(*local_88 + 0x450))();
    bVar15 = DAT_02807f60 != unaff_RDI;
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((~bVar5 & bVar15) != 0) {
      DAT_02807f60 = unaff_RDI;
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      in_stack_ffffffffffffffb8 = unaff_RDI;
      do {
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x370))();
        plVar14 = local_88;
        if (local_88 == in_stack_ffffffffffffffb8) {
          if (((local_58 == '\0') && (local_88 != (longlong *)0x0)) &&
             (plVar14 = in_stack_ffffffffffffffb8, (char)local_80 != '\0')) goto LAB_0039cad7;
        }
        else {
          if ((char)local_80 == '\0') {
            if (local_58 == '\0') {
              pplVar9 = (longlong **)&local_58;
            }
            else {
              FUN_00d50b20();
              pplVar9 = (longlong **)&local_58;
            }
          }
          else {
            if (local_58 != '\0') {
              FUN_00d50b20();
            }
LAB_0039cad7:
            local_58 = '\x01';
            pplVar9 = &local_80;
          }
          *(undefined1 *)pplVar9 = 0;
          in_stack_ffffffffffffffb8 = plVar14;
        }
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_026f7020 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          _DAT_0270aa58 = FUN_00015ff0();
          _DAT_0270aa40 = "MDEditorViewController";
          _DAT_0270aa48 = 0x1e8;
          _DAT_0270aa50 = FUN_00074eb0;
          _DAT_0270aa60 = 0;
          uRam000000000270aa68 = 0;
          _DAT_0270aa70 = 0;
          _DAT_0270aae8 = 0;
          uRam000000000270aaf0 = 0;
          _DAT_0270aaf8 = 0;
          DAT_0270aafa = 1;
          _DAT_0270aa78 = 0;
          uRam000000000270aa80 = 0;
          _DAT_0270aa88 = 0;
          uRam000000000270aa90 = 0;
          _DAT_0270aa98 = 0;
          uRam000000000270aaa0 = 0;
          _DAT_0270aaa8 = 0;
          uRam000000000270aab0 = 0;
          _DAT_0270aab8 = 0;
          uRam000000000270aac0 = 0;
          _DAT_0270aac8 = 0;
          uRam000000000270aad0 = 0;
          _DAT_0270aad8 = 0;
          uRam000000000270aae0 = 0;
          DAT_0270ab03 = 0;
          _DAT_0270aafb = 0;
          ___cxa_guard_release();
        }
        plVar14 = &DAT_02802688;
        if (in_stack_ffffffffffffffb8 != (longlong *)0x0) {
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x360))();
          cVar6 = FUN_00e85ea0();
          plVar14 = (longlong *)&stack0xffffffffffffffb8;
          if (cVar6 == '\0') {
            plVar14 = &DAT_02802688;
          }
        }
        if (*plVar14 != 0) {
          plVar14 = in_stack_ffffffffffffffb8;
          if ((local_58 == '\0') && (in_stack_ffffffffffffffb8 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          goto joined_r0x0039cc5a;
        }
      } while (in_stack_ffffffffffffffb8 != (longlong *)0x0);
      plVar14 = (longlong *)0x0;
joined_r0x0039cc5a:
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar14 != (longlong *)0x0) {
        FUN_00221930();
        plVar14 = local_88;
        if (((((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
            (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_002218b0();
        plVar3 = local_88;
        if ((char)local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
            if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0039ccdf;
          }
          if (plVar14 == (longlong *)0x0) goto LAB_0039ce17;
LAB_0039cced:
          FUN_006f47d0();
          plVar14 = local_88;
          if (local_88 != (longlong *)0x0) {
            if ((((char)local_80 == '\0') && (FUN_00d50b00(), (char)local_80 != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 != (longlong *)0x0) {
              FUN_00756eb0();
              plVar4 = local_88;
              if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar4 != plVar14) {
                FUN_002218b0();
                FUN_00751820();
                if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            bVar15 = false;
LAB_0039cdff:
            FUN_00d50b20();
            if (bVar15) goto LAB_0039ce17;
          }
          FUN_00d50b20();
        }
        else {
LAB_0039ccdf:
          if (plVar14 != (longlong *)0x0) goto LAB_0039cced;
          bVar15 = true;
          if (plVar3 != (longlong *)0x0) goto LAB_0039cdff;
        }
LAB_0039ce17:
        FUN_00d50b20();
      }
    }
  }
  iVar7 = FUN_01d3a5a0();
  if (((iVar7 != 1) || (iVar7 = FUN_01d3b630(), iVar7 != 1)) || (iVar7 = FUN_01d3b620(), iVar7 != 2)
     ) goto LAB_0039d0f9;
  FUN_01d3abf0();
  uVar16 = FUN_01e466c0();
  (**(code **)(*unaff_RDI + 0xb28))();
  plVar14 = local_88;
  if ((((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), (char)local_80 != '\0' && (local_88 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xab8))(uVar16);
  if (((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0039d0dd:
    FUN_00d50b20();
  }
  else {
    if ((plVar14 != (longlong *)0x0) &&
       ((local_88 == (longlong *)0x0 && (*(char *)((longlong)unaff_RDI + 0x42c) != '\0')))) {
      FUN_00d23310();
      pplVar9 = &local_80;
      local_90 = (longlong *)CONCAT71(local_90._1_7_,(char)local_80);
      pplVar12 = &local_90;
      if ((char)local_80 != '\0') {
        pplVar12 = pplVar9;
      }
      *(undefined1 *)pplVar12 = 0;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar13 = (pthread_key_t)pplVar9;
      (**(code **)(*local_88 + 0x928))();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == '\0') {
        if (in_stack_ffffffffffffffb8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_90 != '\0') {
        FUN_00d50b20();
      }
      uVar11 = FUN_01d3b590();
      if ((uVar11 & 4) == 0) {
        FUN_00d403d0();
        lVar1 = DAT_02702d30;
        if (DAT_02702d30 != 0) {
          FUN_00d50b00();
        }
        local_100 = 0;
        FUN_00d50b00();
        lVar2 = DAT_02704e30;
        local_100 = '\x01';
        local_108 = unaff_RDI;
        if (DAT_02704e30 != 0) {
          FUN_00d50b00();
        }
        local_128 = lVar2;
        local_90 = in_stack_ffffffffffffffb8;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_c0 = 0;
        local_c8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_c8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_c0 = '\x01';
        FUN_00d40470(&local_c8,&local_108,1,3);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_88 = (longlong *)&DAT_0253d630;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar11 = DAT_026f6de0;
        if (DAT_026f6de0 != 0) {
          FUN_00d50b00();
        }
        local_120 = uVar11;
        FUN_00e7d6f0();
        uVar16 = FUN_0071a120();
        if (((((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
            (uVar16 = FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        FUN_000175c0(uVar16,&stack0xffffffffffffffb8);
        plVar14 = local_88;
        if ((char)local_80 == '\0') {
          if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
             (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80._0_1_ = '\0';
        }
        if (plVar14 != (longlong *)0x0) {
          local_80._0_1_ = '\0';
          local_88 = plVar14;
          uVar8 = FUN_00c70bc0();
          uVar11 = (ulonglong)uVar8;
          if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_120 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026f6f08;
        if ((plVar14 != (longlong *)0x0 & (byte)uVar11) != 0) {
          if (DAT_026f6f08 != 0) {
            FUN_00d50b00();
          }
          dVar17 = (double)FUN_00e7d6f0();
          uVar11 = (ulonglong)(dVar17 * DAT_023907c0);
          dVar17 = dVar17 * DAT_023907c0 - _DAT_023907c8;
          uVar16 = FUN_0071a120();
          if (((((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) &&
              (uVar16 = FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
          bVar5 = (byte)(((longlong)dVar17 & (longlong)uVar11 >> 0x3f | uVar11) / 3);
          FUN_000175c0(uVar16,&stack0xffffffffffffffb8);
          plVar14 = local_88;
          if ((char)local_80 == '\0') {
            if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
               (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80._0_1_ = '\0';
          }
          if (plVar14 != (longlong *)0x0) {
            local_80._0_1_ = '\0';
            local_88 = plVar14;
            bVar5 = FUN_00c70bc0();
            if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((plVar14 != (longlong *)0x0 & bVar5) == 0) {
            FUN_00d23310();
            plVar14 = local_88;
            local_90 = (longlong *)CONCAT71(local_90._1_7_,(char)local_80);
            pplVar9 = &local_90;
            pplVar12 = &local_80;
            if ((char)local_80 == '\0') {
              pplVar12 = pplVar9;
            }
            *(undefined1 *)pplVar12 = 0;
            if (((char)local_80 != '\0') && (plVar14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar13 = (pthread_key_t)pplVar9;
            (**(code **)(*plVar14 + 0x928))();
            pvVar10 = _pthread_getspecific(pVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((char)local_90 != '\0') {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d23310();
              plVar14 = local_88;
              pplVar9 = &local_80;
              pplVar12 = &local_90;
              if ((char)local_80 != '\0') {
                pplVar12 = pplVar9;
              }
              local_90 = (longlong *)CONCAT71(local_90._1_7_,(char)local_80);
              *(undefined1 *)pplVar12 = 0;
              if (((char)local_80 != '\0') && (plVar14 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pVar13 = (pthread_key_t)pplVar9;
              (**(code **)(*plVar14 + 0x928))();
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar7 = FUN_01326de0();
              if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
                FUN_00d50b20();
              }
              if ((char)local_90 != '\0') {
                FUN_00d50b20();
              }
              if (iVar7 == 3) goto LAB_0039db8b;
            }
          }
          FUN_00d23310();
          plVar14 = local_88;
          pplVar9 = &local_80;
          if ((char)local_80 == '\0') {
            pplVar9 = (longlong **)&local_58;
          }
          local_58 = (char)local_80;
          *(undefined1 *)pplVar9 = 0;
          if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = (**(code **)(*plVar14 + 0x928))();
          local_b0 = 0;
          if (lVar1 != 0) {
            uVar16 = FUN_00d50b00();
          }
          local_b0 = '\x01';
          local_b8 = lVar1;
          (**(code **)(*unaff_RDI + 0xda8))(uVar16,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != '\0') {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d403d0();
        lVar1 = DAT_02729470;
        if (DAT_02729470 != 0) {
          FUN_00d50b00();
        }
        local_110 = 0;
        FUN_00d50b00();
        lVar2 = DAT_02704e30;
        local_110 = '\x01';
        local_118 = unaff_RDI;
        if (DAT_02704e30 != 0) {
          FUN_00d50b00();
        }
        local_128 = lVar2;
        local_90 = in_stack_ffffffffffffffb8;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_f0 = 0;
        local_f8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_f0 = '\x01';
        FUN_00d40470(&local_f8,&local_118,1,3);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_88 = (longlong *)&DAT_0253d630;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        local_88 = &DAT_024c5048;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23310();
        plVar14 = local_88;
        pplVar9 = &local_80;
        if ((char)local_80 == '\0') {
          pplVar9 = &local_90;
        }
        local_90 = (longlong *)CONCAT71(local_90._1_7_,(char)local_80);
        *(undefined1 *)pplVar9 = 0;
        if (((char)local_80 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar14 + 0x928))();
        local_d0 = 0;
        local_d8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_d8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_d0 = '\x01';
        uVar16 = FUN_0039e8b0();
        local_e0 = 0;
        if (local_40 == '\0') {
          if (in_stack_ffffffffffffffb8 != (longlong *)0x0) {
            uVar16 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_e0 = '\x01';
        local_e8 = in_stack_ffffffffffffffb8;
        (**(code **)(*unaff_RDI + 0xdb8))(uVar16,1);
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((char)local_90 != '\0') {
          FUN_00d50b20();
        }
      }
LAB_0039db8b:
      if (in_stack_ffffffffffffffb8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    if (local_88 != (longlong *)0x0) goto LAB_0039d0dd;
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0039d0f9:
  FUN_0199c1c0();
  return;
}


