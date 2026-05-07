// Function: FUN_009d6bac
// Address: 009d6bac
// Size: 911 bytes
// Class: GNString
// String references:
//   "Unable to open message catalog: "


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d6bac(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  runtime_error *this;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  string *psVar6;
  string *psVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  int *local_c0;
  longlong local_b8;
  string local_b0 [8];
  ulonglong local_a8;
  runtime_error *local_98;
  int local_8c;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined1 local_38 [8];
  
  FUN_00acddc0();
  this = (runtime_error *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (((byte)local_b0[0] & 1) == 0) {
    local_a8 = (ulonglong)((byte)local_b0[0] >> 1);
  }
  if ((local_a8 != 0) && (*(longlong **)(unaff_RDI + 0x10) != (longlong *)0x0)) {
    this = (runtime_error *)(**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x18))();
    if ((int)this < 0) {
      FUN_009d5ed0();
      psVar6 = local_b0;
      FUN_009d6fc0();
      std::runtime_error::runtime_error(this,psVar6);
      if (((ulonglong)local_70 & 1) != 0) {
        operator_delete(this);
      }
      FUN_00acdf60();
      std::runtime_error::~runtime_error(this);
      if ((local_58 & 1) != 0) {
        operator_delete(this);
      }
    }
    else {
      local_b8 = unaff_RDI + 0x120;
      iVar9 = 0;
      local_98 = this;
      do {
        pcVar3 = (char *)FUN_00acf6f0();
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          lVar10 = **(longlong **)(unaff_RDI + 8);
          cVar1 = (**(code **)(lVar10 + 0x38))();
          std::string::append((ulong)lVar10,cVar1);
          cVar1 = *pcVar3;
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x20))(0,local_98,iVar9 + 200,&local_58);
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        bVar11 = ((ulonglong)local_70 & 1) == 0;
        uVar8 = local_68;
        if (bVar11) {
          uVar8 = (ulonglong)local_70 >> 1 & 0x7f;
        }
        if (uVar8 != 0) {
          uVar8 = 0;
          do {
            lVar10 = (longlong)&local_70 + 1;
            if (!bVar11) {
              lVar10 = local_60;
            }
            cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 8) + 0x48))(lVar10,0);
            std::string::append((ulong)lVar10,cVar1);
            uVar8 = uVar8 + 1;
            bVar11 = ((ulonglong)local_70 & 1) == 0;
            uVar5 = local_68;
            if (bVar11) {
              uVar5 = (ulonglong)local_70 >> 1 & 0x7f;
            }
          } while (uVar8 < uVar5);
        }
        local_c0 = &local_8c;
        psVar7 = (string *)&DAT_023ceda0;
        psVar6 = (string *)&local_c0;
        local_8c = iVar9;
        FUN_009d7348(psVar6,&DAT_023ceda0,local_38);
        std::string::operator=(psVar6,psVar7);
        if ((local_88 & 1) != 0) {
          operator_delete(psVar6);
        }
        if (((ulonglong)local_70 & 1) != 0) {
          operator_delete(psVar6);
        }
        if ((local_58 & 1) != 0) {
          operator_delete(psVar6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x16);
      if ((DAT_02753c60 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_02753c58 = 0;
        _DAT_02753c50 = 0;
        _DAT_02753c48 = 0;
        ___cxa_atexit(extraout_XMM0_Da,0);
        ___cxa_guard_release();
      }
      iVar9 = 300;
      lVar10 = 0;
      do {
        (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x20))(0,local_98,iVar9,&DAT_02753c48);
        this = (runtime_error *)(ulonglong)((byte)local_58 & 1);
        uVar8 = uStack_50;
        if ((local_58 & 1) == 0) {
          uVar8 = (ulonglong)((byte)local_58 >> 1);
        }
        if (uVar8 != 0) {
          local_70 = &local_58;
          lVar4 = FUN_009d73f4(&local_70,&DAT_023ceda0,&local_88);
          uVar2 = *(undefined4 *)((longlong)&DAT_023ced60 + lVar10);
          *(undefined4 *)(lVar4 + 0x38) = uVar2;
          this = (runtime_error *)
                 ((ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),(byte)local_58) & 0xffffffffffffff01)
          ;
        }
        if ((char)this != '\0') {
          operator_delete(this);
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x38);
    }
  }
  uVar2 = FUN_009d70d8();
  *(undefined4 *)(unaff_RDI + 0x168) = uVar2;
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(this);
  }
  return;
}


