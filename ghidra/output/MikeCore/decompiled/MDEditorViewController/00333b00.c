// Function: FUN_00333b00
// Address: 00333b00
// Size: 2152 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x00333ea2) */
/* WARNING: Removing unreachable block (ram,0x00333eae) */
/* WARNING: Removing unreachable block (ram,0x00333f47) */
/* WARNING: Removing unreachable block (ram,0x00333f53) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00333b00(void)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong **pplVar6;
  int iVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined4 uVar12;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_78;
  char local_70 [8];
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  FUN_003322a0();
  if ((local_70[0] == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_50 = local_78;
  FUN_01e561b0();
  FUN_01d8b220();
  local_e0 = (longlong *)CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (local_e0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_38[0] = '\0';
  local_a8 = local_e0;
  do {
    plVar8 = local_e0;
    (**(code **)(*local_e0 + 0x370))();
    if (local_78 == plVar8) {
      if (((local_38[0] == '\0') && (local_78 != (longlong *)0x0)) && (local_70[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00333c07;
      }
    }
    else {
      local_e0 = local_78;
      plVar8 = local_78;
      if (local_70[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00333c07:
        local_38[0] = '\x01';
        pcVar2 = local_70;
      }
      *pcVar2 = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
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
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar6 = &local_e0;
      if (cVar1 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    if (*pplVar6 != (longlong *)0x0) {
      if ((local_38[0] == '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar8 = local_50;
      plVar10 = local_e0;
      if (local_a8 == (longlong *)0x0) goto LAB_00333da3;
      goto LAB_00333d9e;
    }
    if (local_e0 == (longlong *)0x0) {
      plVar8 = local_50;
      plVar10 = (longlong *)0x0;
      if (local_a8 != (longlong *)0x0) {
LAB_00333d9e:
        plVar8 = local_50;
        FUN_00d50b20();
      }
LAB_00333da3:
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
        local_70[0] = '\0';
        local_78 = (longlong *)0x0;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_68 = *(longlong *)(unaff_RDI + 0xd0);
        while( true ) {
          lVar3 = (longlong)(int)local_60;
          iVar7 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar7);
          if (*(int *)(local_68 + 0xc) <= iVar7) break;
          local_78 = *(longlong **)(*(longlong *)(local_68 + 0x10) + 8 + lVar3 * 8);
          if (plVar10 == (longlong *)0x0) {
            (**(code **)(*local_78 + 0x670))();
          }
          else {
            FUN_0021a630();
            local_98 = 0;
            local_a0 = CONCAT71(uStack_47,local_48);
            if (local_40 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            plVar8 = local_50;
            local_98 = '\x01';
            (**(code **)(*local_78 + 0x670))();
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*local_78 + 0x620))();
          (**(code **)(*local_78 + 0x678))();
          if (local_60._4_4_ != 0) {
            if (local_60 < 0) {
              iVar7 = -local_60._4_4_;
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar7 = 0;
            }
            local_60 = CONCAT44(iVar7,(int)local_60);
          }
        }
        FUN_003357b0();
      }
      if ((plVar8 != (longlong *)0x0) && (*(int *)((longlong)local_50 + 0xc) != 0)) {
        FUN_00d23310();
        pcVar2 = &local_48;
        if (local_70[0] != '\0') {
          pcVar2 = local_70;
        }
        local_48 = local_70[0];
        *pcVar2 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)pcVar2);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar3 = FUN_00e8b990();
        if ((local_48 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_c0 = 0;
          if (unaff_RDI != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_02702608;
          local_c0 = '\x01';
          local_c8 = unaff_RDI;
          if (DAT_02702608 != 0) {
            FUN_00d50b00();
          }
          local_110 = lVar3;
          local_108 = '\x01';
          FUN_00d23310();
          pcVar2 = &local_d8;
          pcVar11 = local_70;
          if (local_70[0] == '\0') {
            pcVar11 = pcVar2;
          }
          local_d8 = local_70[0];
          *pcVar11 = '\0';
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar2);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b8 = FUN_00e8b990();
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
          local_b0 = '\x01';
          FUN_0006e1c0();
          uVar12 = FUN_00e86210();
          local_100 = DAT_026d83e0;
          if (DAT_026d83e0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_00c841b0(uVar12,&local_100);
          local_88 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_88 = '\x01';
          local_90 = local_78;
          local_e8 = '\0';
          local_f0 = 0;
          FUN_000bfbc0(&local_b8,&local_110,0xa0,&local_90);
          lVar3 = *(longlong *)(unaff_RDI + 0x128);
          lVar5 = CONCAT71(uStack_47,local_48);
          lVar9 = lVar3;
          if (lVar3 != lVar5) {
            if (local_40 == '\0') {
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_00d50b00();
                lVar5 = CONCAT71(uStack_47,local_48);
                lVar3 = *(longlong *)(unaff_RDI + 0x128);
              }
            }
            else {
              local_40 = '\0';
            }
            *(longlong *)(unaff_RDI + 0x128) = lVar5;
            lVar9 = lVar5;
            if (lVar3 != 0) {
              FUN_00d50b20();
              lVar9 = CONCAT71(uStack_47,local_48);
            }
          }
          if ((local_40 != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      *(undefined1 *)(unaff_RDI + 0x139) = 0;
      *(bool *)(unaff_RDI + 0x138) = *(longlong *)(unaff_RDI + 0x128) != 0;
      FUN_0032d440();
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
  } while( true );
}


