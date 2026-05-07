// Function: FUN_00e8c420
// Address: 00e8c420
// Size: 1232 bytes
// Class: GNModelObject
// String references:
//   "GNModelObject"


/* WARNING: Removing unreachable block (ram,0x00e8c58e) */
/* WARNING: Removing unreachable block (ram,0x00e8c593) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8c420(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  pthread_key_t in_ECX;
  longlong **pplVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  
  lVar2 = unaff_RDI[6];
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0xc);
    uVar7 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      bVar9 = false;
      iVar5 = *(int *)(lVar2 + 0xc);
    }
    else {
      bVar9 = false;
      while( true ) {
        uVar4 = uVar4 - 1;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar4 * 8);
        in_ECX = uVar4;
        if ((*(longlong *)(lVar2 + 0x10) == unaff_RSI) &&
           ((*param_2 == 0 || (*(longlong *)(lVar2 + 0x20) == *param_2)))) {
          param_1 = FUN_00d23620();
          in_ECX = 1;
          if (*(longlong **)(lVar2 + 0x18) == unaff_RDI) {
            bVar9 = true;
          }
        }
        if ((longlong)uVar7 < 2) break;
        uVar7 = uVar7 - 1;
        lVar2 = unaff_RDI[6];
      }
      lVar2 = unaff_RDI[6];
      iVar5 = *(int *)(lVar2 + 0xc);
    }
    if (iVar5 == 0) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      param_1 = FUN_00d50b20();
      unaff_RDI[6] = 0;
      if (lVar2 != 0) {
        param_1 = FUN_00d50b20();
      }
    }
    if (((longlong *)*param_2 == (longlong *)0x0) || (!bVar9)) {
                    /* WARNING: Could not recover jumptable at 0x00e8c57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_RDI + 0x298))(param_1,unaff_RSI);
      return;
    }
    cVar1 = (**(code **)(*(longlong *)*param_2 + 0x370))();
    if (cVar1 != '\0') {
      (**(code **)(*unaff_RDI + 0x210))(extraout_XMM0_Da,*param_2);
      plVar8 = local_78;
      bVar9 = local_70 != '\0';
      local_80 = local_78;
      if (bVar9) {
        local_70 = '\0';
      }
      if (local_78 != (longlong *)0x0) {
        cVar1 = FUN_00d77de0();
        if (cVar1 == '\0') {
          if ((DAT_028a8d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_028a8ce8 = FUN_00d4fe50();
            _DAT_028a8cd0 = "GNModelObject";
            _DAT_028a8cd8 = 0x38;
            in_ECX = 0xe8b770;
            _DAT_028a8ce0 = FUN_00e8b770;
            _DAT_028a8cf0 = 0;
            uRam00000000028a8cf8 = 0;
            _DAT_028a8d00 = 0;
            uRam00000000028a8d08 = 0;
            _DAT_028a8d10 = 0;
            uRam00000000028a8d18 = 0;
            _DAT_028a8d20 = 0;
            uRam00000000028a8d28 = 0;
            _DAT_028a8d30 = 0;
            uRam00000000028a8d38 = 0;
            _DAT_028a8d40 = 0;
            uRam00000000028a8d48 = 0;
            _DAT_028a8d50 = 0;
            uRam00000000028a8d58 = 0;
            _DAT_028a8d60 = 0;
            uRam00000000028a8d68 = 0;
            _DAT_028a8d70 = 0;
            uRam00000000028a8d78 = 0;
            _DAT_028a8d80 = 0;
            uRam00000000028a8d88 = 0;
            _DAT_028a8d90 = 0;
            ___cxa_guard_release();
          }
          (**(code **)(*plVar8 + 0x360))();
          cVar1 = FUN_00e85ea0();
          plVar8 = local_80;
          plVar6 = local_80;
          if (cVar1 == '\0') {
            plVar6 = DAT_02802688;
          }
          if (plVar6 != (longlong *)0x0) {
            _pthread_getspecific(in_ECX);
            FUN_00e8c420();
          }
        }
        else {
          local_70 = '\0';
          local_78 = (longlong *)0x0;
          local_68 = plVar8;
          local_60 = 0xffffffff;
          local_58 = 0;
          uVar10 = extraout_XMM0_Da_00;
          iVar5 = 0;
          while( true ) {
            if (iVar5 != 0) {
              if (iVar5 < 1) {
                iVar5 = -iVar5;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar5);
                uVar10 = FUN_00d23690(uVar10,iVar5);
                local_58 = local_58 + iVar5;
                iVar5 = 0;
              }
              local_60 = CONCAT44(iVar5,(int)local_60);
            }
            lVar2 = (longlong)(int)local_60;
            iVar5 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar5);
            if (*(int *)((longlong)local_68 + 0xc) <= iVar5) break;
            plVar8 = *(longlong **)(local_68[2] + 8 + lVar2 * 8);
            local_78 = plVar8;
            local_88 = plVar8;
            if ((DAT_028a8d98 == '\0') &&
               (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_02, iVar5 != 0)) {
              _DAT_028a8ce8 = FUN_00d4fe50();
              _DAT_028a8cd0 = "GNModelObject";
              _DAT_028a8cd8 = 0x38;
              _DAT_028a8ce0 = FUN_00e8b770;
              _DAT_028a8cf0 = 0;
              uRam00000000028a8cf8 = 0;
              _DAT_028a8d00 = 0;
              uRam00000000028a8d08 = 0;
              _DAT_028a8d10 = 0;
              uRam00000000028a8d18 = 0;
              _DAT_028a8d20 = 0;
              uRam00000000028a8d28 = 0;
              _DAT_028a8d30 = 0;
              uRam00000000028a8d38 = 0;
              _DAT_028a8d40 = 0;
              uRam00000000028a8d48 = 0;
              _DAT_028a8d50 = 0;
              uRam00000000028a8d58 = 0;
              _DAT_028a8d60 = 0;
              uRam00000000028a8d68 = 0;
              _DAT_028a8d70 = 0;
              uRam00000000028a8d78 = 0;
              _DAT_028a8d80 = 0;
              uRam00000000028a8d88 = 0;
              _DAT_028a8d90 = 0;
              uVar10 = ___cxa_guard_release();
            }
            pplVar3 = &DAT_02802688;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x360))();
              cVar1 = FUN_00e85ea0();
              pplVar3 = &local_88;
              uVar10 = extraout_XMM0_Da_01;
              if (cVar1 == '\0') {
                pplVar3 = &DAT_02802688;
              }
            }
            if (*pplVar3 != (longlong *)0x0) {
              _pthread_getspecific((pthread_key_t)pplVar3);
              uVar10 = FUN_00e8c420();
            }
            iVar5 = local_60._4_4_;
          }
          FUN_00e8cae0();
          plVar8 = local_80;
        }
      }
      if ((bVar9) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


