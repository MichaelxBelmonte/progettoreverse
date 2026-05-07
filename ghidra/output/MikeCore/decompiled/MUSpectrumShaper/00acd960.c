// Function: FUN_00acd960
// Address: 00acd960
// Size: 906 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acd960(runtime_error *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  void *pvVar6;
  ulonglong uVar7;
  string *psVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  runtime_error rVar11;
  int iVar12;
  longlong unaff_RDI;
  longlong lVar13;
  size_t sVar14;
  char cVar15;
  string local_90 [8];
  longlong local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  runtime_error *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  void *local_38;
  undefined1 *puVar5;
  
  ___bzero();
  FUN_00acddc0();
  if (((byte)local_90[0] & 1) == 0) {
    if ((byte)local_90[0] >> 1 != 0) goto LAB_00acd9b3;
  }
  else if (local_88 != 0) {
LAB_00acd9b3:
    if (*(longlong **)(unaff_RDI + 0x10) != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x18))();
      if ((int)uVar4 < 0) {
        local_58 = operator_new((ulong)param_1);
        local_68 = _DAT_023d4f60;
        uStack_64 = _UNK_023d4f64;
        uStack_60 = _UNK_023d4f68;
        uStack_5c = _UNK_023d4f6c;
        *(undefined8 *)(local_58 + 0x18) = 0x203a676f6c617461;
        *(undefined8 *)(local_58 + 0x10) = 0x6320656761737365;
        *(undefined8 *)(local_58 + 8) = 0x6d206e65706f206f;
        param_1 = (runtime_error *)0x7420656c62616e55;
        *(undefined8 *)local_58 = 0x7420656c62616e55;
        local_58[0x20] = (runtime_error)0x0;
        psVar8 = local_90;
        FUN_009d6fc0();
        std::runtime_error::runtime_error(param_1,psVar8);
        if ((local_48 & 1) != 0) {
          operator_delete(param_1);
        }
        FUN_00acdf60();
        std::runtime_error::~runtime_error(param_1);
        if ((local_68 & 1) != 0) {
          operator_delete(param_1);
        }
      }
      if (-1 < (int)uVar4) {
        iVar12 = 1;
        local_70 = uVar4;
        do {
          sVar14 = (size_t)param_3;
          plVar2 = *(longlong **)(unaff_RDI + 0x10);
          local_78 = FUN_00acf6c0();
          sVar3 = _strlen((char *)param_1);
          puVar5 = (undefined1 *)CONCAT44(extraout_var,sVar3);
          if ((undefined1 *)0xffffffffffffffef < puVar5) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if ((undefined1 *)((longlong)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
            pvVar6 = operator_new((ulong)param_1);
            local_48 = (ulonglong)(puVar5 + 0x10) & 0xfffffffffffffff0 | 1;
            local_40 = puVar5;
            local_38 = pvVar6;
LAB_00acdb2e:
            uVar4 = local_70;
            _memcpy(param_1,puVar5,sVar14);
          }
          else {
            local_48 = CONCAT71(local_48._1_7_,(char)sVar3 * '\x02');
            pvVar6 = (void *)((longlong)&local_48 + 1);
            uVar4 = local_70;
            if (puVar5 != (undefined1 *)0x0) goto LAB_00acdb2e;
          }
          *(undefined1 *)((longlong)pvVar6 + (longlong)puVar5) = 0;
          param_1 = (runtime_error *)0x0;
          (**(code **)(*plVar2 + 0x20))(0,uVar4,iVar12,&local_48);
          if ((local_48 & 1) != 0) {
            operator_delete(param_1);
          }
          param_3 = (ulonglong)(byte)local_68;
          if ((local_68 & 1) == 0) {
            uVar7 = (ulonglong)((byte)local_68 >> 1);
          }
          else {
            uVar7 = CONCAT44(uStack_5c,uStack_60);
          }
          if (uVar7 != 0) {
            param_1 = (runtime_error *)((longlong)&local_68 + 1);
            if ((local_68 & 1) != 0) {
              param_1 = local_58;
            }
            uVar9 = (ulonglong)((uint)uVar7 & 3);
            uVar10 = (undefined1)iVar12;
            if (uVar7 - 1 < 3) {
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              do {
                *(undefined1 *)(unaff_RDI + 0x20 + (ulonglong)(byte)param_1[lVar13]) = uVar10;
                *(undefined1 *)(unaff_RDI + 0x20 + (ulonglong)(byte)param_1[lVar13 + 1]) = uVar10;
                *(undefined1 *)(unaff_RDI + 0x20 + (ulonglong)(byte)param_1[lVar13 + 2]) = uVar10;
                *(undefined1 *)(unaff_RDI + 0x20 + (ulonglong)(byte)param_1[lVar13 + 3]) = uVar10;
                lVar13 = lVar13 + 4;
              } while (uVar7 - uVar9 != lVar13);
            }
            if (uVar9 != 0) {
              param_1 = param_1 + lVar13;
              uVar7 = 0;
              do {
                *(undefined1 *)(unaff_RDI + 0x20 + (ulonglong)(byte)param_1[uVar7]) = uVar10;
                uVar7 = uVar7 + 1;
              } while (uVar9 != uVar7);
            }
          }
          if ((local_68 & 1) != 0) {
            operator_delete(param_1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x3c);
        (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x28))();
        goto LAB_00acdc91;
      }
    }
  }
  cVar15 = '\x01';
  do {
    param_1 = (runtime_error *)FUN_00acf6c0();
    if ((param_1 != (runtime_error *)0x0) && (rVar11 = *param_1, rVar11 != (runtime_error)0x0)) {
      param_1 = param_1 + 1;
      do {
        *(char *)(unaff_RDI + 0x20 + (ulonglong)(byte)rVar11) = cVar15;
        rVar11 = *param_1;
        param_1 = param_1 + 1;
      } while (rVar11 != (runtime_error)0x0);
    }
    cVar15 = cVar15 + '\x01';
  } while (cVar15 != '<');
LAB_00acdc91:
  uVar7 = 0;
  do {
    if ((*(char *)(unaff_RDI + 0x61 + uVar7) == '\0') &&
       (cVar15 = (char)(uVar7 & 0xffffffff) + 'A',
       param_1 = (runtime_error *)CONCAT71((int7)((uVar7 & 0xffffffff) >> 8),cVar15), -1 < cVar15))
    {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + 0x10) + 0x104 + uVar7 * 4);
      param_1 = (runtime_error *)(ulonglong)uVar1;
      if ((uVar1 & 0x1000) == 0) {
        if ((short)uVar1 < 0) {
          *(undefined1 *)(unaff_RDI + 0x61 + uVar7) = 0x17;
        }
      }
      else {
        *(undefined1 *)(unaff_RDI + 0x61 + uVar7) = 0x16;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0xbf);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}


