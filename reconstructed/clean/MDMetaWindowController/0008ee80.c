// Function: FUN_0008ee80
// Address: 0008ee80
// Size: 1852 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDEditorViewController"
//   "MUMultiTrackView"

uint64_t FUN_0008ee80(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int64_t **pplVar7;
  void*arg1;
  int64_t *plVar8;
  int64_t *plVar9;
  void*unaff_R14;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    FUN_01e561b0();
    plVar9 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      unaff_R14 = (void*)0x0;
      goto LAB_0008f474;
    }
    FUN_01e561b0();
    FUN_01d8b220();
    local_60 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (int64_t *)0x0) {
        local_60 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = local_48;
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000914a0();
    plVar9 = g_02802688;
    if (local_60 != (int64_t *)0x0) {
      (**(code **)(*local_60 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar9 = g_02802688;
      if (cVar3 != '\0') {
        plVar9 = local_60;
      }
    }
    if (plVar9 == (int64_t *)0x0) {
      if ((g_026fe4d0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02726438 = FUN_0006d940();
        g_02726420 = "MUMultiTrackView";
        g_02726428 = 0x228;
        g_02726430 = FUN_00082de0;
        g_02726440 = 0;
        ram_0000000002726448 = 0;
        g_02726450 = 0;
        g_027264c8 = 0;
        ram_00000000027264d0 = 0;
        g_027264d8 = 0;
        g_027264da = 1;
        g_02726458 = 0;
        ram_0000000002726460 = 0;
        g_02726468 = 0;
        ram_0000000002726470 = 0;
        g_02726478 = 0;
        ram_0000000002726480 = 0;
        g_02726488 = 0;
        ram_0000000002726490 = 0;
        g_02726498 = 0;
        ram_00000000027264a0 = 0;
        g_027264a8 = 0;
        ram_00000000027264b0 = 0;
        g_027264b8 = 0;
        ram_00000000027264c0 = 0;
        g_027264e3 = 0;
        g_027264db = 0;
        ___cxa_guard_release();
      }
      if (local_60 == (int64_t *)0x0) {
LAB_0008f1b6:
        plVar9 = g_02802688;
      }
      else {
        (**(code **)(*local_60 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar9 = local_60;
        if (cVar3 == '\0') goto LAB_0008f1b6;
      }
      if (plVar9 != (int64_t *)0x0) {
        local_58 = local_60;
        local_38[0] = '\0';
        arg1 = &g_02802688;
        do {
          plVar9 = local_58;
          (**(code **)(*local_58 + 0x370))();
          plVar8 = local_48;
          if (local_48 == plVar9) {
            if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
              local_38[0] = '\x01';
              plVar8 = plVar9;
              goto LAB_0008f2c7;
            }
          }
          else {
            local_58 = local_48;
            if (local_40[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar6 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar6 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
              local_38[0] = '\x01';
LAB_0008f2c7:
              local_38[0] = '\x01';
              pcVar6 = local_40;
            }
            *pcVar6 = '\0';
            plVar9 = plVar8;
          }
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            g_026e0ab8 = FUN_00015ff0();
            g_026e0aa0 = "MDMetaWindowController";
            g_026e0aa8 = 0x198;
            g_026e0ab0 = FUN_0006dea0;
            g_026e0ac0 = 0;
            ram_00000000026e0ac8 = 0;
            g_026e0ad0 = 0;
            g_026e0b48 = 0;
            ram_00000000026e0b50 = 0;
            g_026e0b58 = 0;
            g_026e0b5a = 1;
            g_026e0ad8 = 0;
            ram_00000000026e0ae0 = 0;
            g_026e0ae8 = 0;
            ram_00000000026e0af0 = 0;
            g_026e0af8 = 0;
            ram_00000000026e0b00 = 0;
            g_026e0b08 = 0;
            ram_00000000026e0b10 = 0;
            g_026e0b18 = 0;
            ram_00000000026e0b20 = 0;
            g_026e0b28 = 0;
            ram_00000000026e0b30 = 0;
            g_026e0b38 = 0;
            ram_00000000026e0b40 = 0;
            g_026e0b63 = 0;
            g_026e0b5b = 0;
            ___cxa_guard_release();
          }
          pplVar7 = &g_02802688;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar7 = &local_58;
            if (cVar3 == '\0') {
              pplVar7 = &g_02802688;
            }
          }
          if (*pplVar7 != (int64_t *)0x0) {
            if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            else if (local_58 == (int64_t *)0x0) break;
            uVar10 = FUN_0063f230();
            if (local_40[0] == '\0') {
              if (local_48 != (int64_t *)0x0) {
                uVar10 = FUN_00d50b00();
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  uVar10 = FUN_00d50b20();
                }
                goto LAB_0008f4ab;
              }
LAB_0008f4ee:
              bVar1 = true;
            }
            else {
              if (local_48 == (int64_t *)0x0) goto LAB_0008f4ee;
LAB_0008f4ab:
              uVar5 = FUN_00248590(uVar10,1);
              arg1 = (void*)(uint64_t)uVar5;
              FUN_00d50b20();
              bVar1 = false;
            }
            FUN_00d50b20();
            if (!bVar1) goto LAB_0008f210;
            break;
          }
        } while (local_58 != (int64_t *)0x0);
      }
    }
    else {
      local_38[0] = '\0';
      arg1 = &g_02802688;
      local_58 = local_60;
      do {
        plVar9 = local_58;
        uVar10 = (**(code **)(*local_58 + 0x370))();
        plVar8 = local_48;
        if (local_48 == plVar9) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            plVar8 = plVar9;
            goto LAB_0008efc7;
          }
        }
        else {
          local_58 = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar6 = local_38;
            }
            else {
              uVar10 = FUN_00d50b20();
              pcVar6 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              uVar10 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_0008efc7:
            local_38[0] = '\x01';
            pcVar6 = local_40;
          }
          *pcVar6 = '\0';
          plVar9 = plVar8;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') &&
           (iVar4 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar4 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          uVar10 = ___cxa_guard_release();
        }
        pplVar7 = &g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_58;
          uVar10 = extraout_XMM0_Da;
          if (cVar3 == '\0') {
            pplVar7 = &g_02802688;
          }
        }
        if (*pplVar7 != (int64_t *)0x0) {
          if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
            uVar10 = FUN_00d50b00();
          }
          else if (local_58 == (int64_t *)0x0) break;
          uVar5 = FUN_00248590(uVar10,1);
          arg1 = (void*)(uint64_t)uVar5;
          FUN_00d50b20();
          goto LAB_0008f210;
        }
      } while (local_58 != (int64_t *)0x0);
    }
    bVar2 = true;
    bVar1 = true;
    unaff_R14 = arg1;
    goto joined_r0x0008f219;
  }
  goto LAB_0008f471;
LAB_0008f210:
  bVar2 = false;
  bVar1 = false;
  unaff_R14 = arg1;
joined_r0x0008f219:
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) goto LAB_0008f474;
LAB_0008f471:
  unaff_R14 = (void*)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
LAB_0008f474:
  return (uint64_t)unaff_R14 & 0xffffff01;
}

