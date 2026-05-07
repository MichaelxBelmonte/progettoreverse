// Function: FUN_00325e30
// Address: 00325e30
// Size: 1118 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x00326227) */
/* WARNING: Removing unreachable block (ram,0x00326234) */
/* WARNING: Removing unreachable block (ram,0x00326183) */
/* WARNING: Removing unreachable block (ram,0x0032618c) */
/* WARNING: Removing unreachable block (ram,0x003261e3) */
/* WARNING: Removing unreachable block (ram,0x003261ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00325e30(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  undefined4 uVar10;
  longlong *local_80;
  char local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  longlong *plVar11;
  char local_48;
  longlong *plVar12;
  char local_38 [8];
  
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar11 = unaff_RSI;
  do {
    (**(code **)(*plVar11 + 0x370))();
    if (local_80 == plVar11) {
      if (((local_38[0] == '\0') && (local_80 != (longlong *)0x0)) && (local_78[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00325ec7;
      }
    }
    else {
      plVar11 = local_80;
      if (local_78[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar3 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar3 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00325ec7:
        local_38[0] = '\x01';
        pcVar3 = local_78;
      }
      *pcVar3 = '\0';
    }
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026f7020 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar6 = &DAT_02802688;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar6 = (longlong *)&stack0xffffffffffffffb0;
      if (cVar1 == '\0') {
        plVar6 = &DAT_02802688;
      }
    }
    if (*plVar6 != 0) {
      if ((local_38[0] == '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar12 = plVar11;
      if (unaff_RSI == (longlong *)0x0) goto LAB_00326059;
      goto LAB_00326054;
    }
  } while (plVar11 != (longlong *)0x0);
  plVar12 = (longlong *)0x0;
  if (unaff_RSI != (longlong *)0x0) {
LAB_00326054:
    FUN_00d50b20();
  }
LAB_00326059:
  if (plVar12 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    FUN_002533b0();
    if (local_78[0] == '\0') {
      if (local_80 == (longlong *)0x0) goto LAB_0032623e;
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_003260af:
      local_78[0] = '\0';
      local_60 = 0;
      local_68 = 0;
      if (*(int *)((longlong)local_80 + 0xc) < 1) {
        local_58 = 0;
        plVar12 = (longlong *)0x0;
      }
      else {
        lVar9 = 0;
        plVar12 = (longlong *)0x0;
        local_58 = 0;
        do {
          lVar7 = *(longlong *)(local_80[2] + lVar9 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          uVar10 = FUN_0054ddc0();
          if (local_48 == '\0') {
            if (plVar11 != (longlong *)0x0) {
              uVar10 = FUN_00d50b00();
              goto LAB_003261a0;
            }
          }
          else if (plVar11 != (longlong *)0x0) {
LAB_003261a0:
            if (0 < *(int *)((longlong)plVar11 + 0xc)) {
              if (plVar12 == (longlong *)0x0) {
                uVar10 = FUN_00326480();
                plVar6 = plVar11;
                if (plVar11 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                  uVar8 = local_58 & 0xffffffff;
                }
                else {
                  uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
                  plVar12 = plVar11;
                  if (local_48 == '\0') {
                    uVar10 = FUN_00d50b00();
                  }
                }
                local_58 = uVar8 & 0xffffffff;
              }
              local_48 = '\0';
              FUN_00d214d0(uVar10,*(undefined4 *)((longlong)plVar12 + 0xc));
            }
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_68 = CONCAT44(local_68._4_4_,(int)lVar9);
        } while ((int)lVar9 < *(int *)((longlong)local_80 + 0xc));
      }
      FUN_00275ca0();
      FUN_00d50b20();
      cVar1 = (char)local_58;
    }
    else {
      if (local_80 != (longlong *)0x0) goto LAB_003260af;
LAB_0032623e:
      plVar12 = (longlong *)0x0;
      cVar1 = '\0';
    }
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (cVar1 != '\0') goto LAB_00326291;
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00326291;
    }
  }
  plVar12 = (longlong *)0x0;
LAB_00326291:
  *unaff_RDI = plVar12;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


