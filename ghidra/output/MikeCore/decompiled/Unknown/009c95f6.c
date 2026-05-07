// Function: FUN_009c95f6
// Address: 009c95f6
// Size: 1706 bytes
// Class: Unknown
// String references:
//   "\n"
//   "  Debug msg..: "
//   "               "
//   "  Debug msg..:  "


void FUN_009c95f6(id *param_1,byte *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  locale *plVar2;
  id *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulong uVar7;
  id *piVar8;
  id *piVar9;
  string *psVar10;
  string *psVar11;
  allocator *paVar12;
  byte local_b0 [8];
  ulonglong local_a8;
  id *local_a0;
  undefined4 local_94;
  byte local_90 [8];
  string *local_88;
  id *local_80;
  byte *local_78;
  byte local_60;
  ulonglong local_58;
  id local_48 [24];
  
  local_94 = param_3;
  local_78 = param_2;
  if (param_4 == '\0') {
    if ((char)param_1 != '\0') {
      std::ios_base::getloc();
      plVar1 = (longlong *)std::locale::use_facet(param_1);
      param_1 = (id *)*plVar1;
      (**(code **)(param_1 + 0x38))();
      std::locale::~locale((locale *)param_1);
      std::ostream::put((char)param_1);
      std::ostream::flush();
    }
    FUN_009ad920();
    FUN_009ad920();
    _strlen((char *)param_1);
    FUN_009ad920();
  }
  else {
    if ((char)param_1 != '\0') {
      std::ios_base::getloc();
      plVar1 = (longlong *)std::locale::use_facet(param_1);
      plVar2 = (locale *)*plVar1;
      (**(code **)(plVar2 + 0x38))();
      std::locale::~locale(plVar2);
      std::ostream::put((char)plVar2);
      std::ostream::flush();
    }
    paVar12 = (allocator *)(local_78 + 1);
    if ((*local_78 & 1) == 0) {
      uVar6 = (ulonglong)(*local_78 >> 1);
    }
    else {
      uVar6 = *(ulonglong *)(local_78 + 8);
    }
    FUN_009ad920(local_78,uVar6);
    FUN_009ad920();
    FUN_009c8de4();
    FUN_009c8de4();
    FUN_009c8de4();
    uVar6 = (ulonglong)local_90[0];
    param_1 = (id *)0x0;
    psVar10 = local_88;
    piVar8 = local_80;
    if ((local_90[0] & 1) == 0) {
      psVar10 = (string *)(ulonglong)(local_90[0] >> 1);
      piVar8 = (id *)((ulonglong)local_90 | 1);
    }
    piVar3 = local_a0;
    uVar5 = local_a8;
    if ((local_b0[0] & 1) == 0) {
      piVar3 = (id *)((ulonglong)local_b0 | 1);
      uVar5 = (ulonglong)(local_b0[0] >> 1);
    }
    psVar11 = (string *)0x0;
    if ((psVar10 != (string *)0x0) && (uVar5 != 0)) {
      psVar11 = (string *)0x0;
      piVar9 = piVar8;
LAB_009c985a:
      param_1 = (id *)0x0;
      uVar4 = 0;
LAB_009c9860:
      if (*piVar9 != piVar3[uVar4]) goto code_r0x009c9865;
      psVar11 = (string *)0x0;
      if ((piVar9 != (id *)(psVar10 + (longlong)piVar8)) &&
         (psVar10 = (string *)(piVar9 + -(longlong)piVar8), psVar10 != (string *)0xffffffffffffffff)
         ) {
        param_1 = local_48;
        psVar11 = (string *)0x0;
LAB_009c98c0:
        if (psVar11 == (string *)0x0) {
          psVar11 = psVar10;
          std::string::string(psVar10,(string *)0x0,(ulong)local_90,(ulong)piVar8,paVar12);
          FUN_009ad920();
          std::ios_base::getloc();
          plVar1 = (longlong *)std::locale::use_facet((id *)psVar11);
          param_1 = (id *)*plVar1;
          (**(code **)(param_1 + 0x38))();
          std::locale::~locale((locale *)param_1);
          std::ostream::put((char)param_1);
          std::ostream::flush();
        }
        else {
          if ((*local_78 & 1) == 0) {
            uVar6 = (ulonglong)(*local_78 >> 1);
          }
          else {
            uVar6 = *(ulonglong *)(local_78 + 8);
          }
          FUN_009ad920(param_1,uVar6);
          FUN_009ad920();
          piVar3 = (id *)(psVar10 + -(longlong)psVar11);
          std::string::string((string *)piVar3,psVar11,(ulong)local_90,(ulong)piVar8,paVar12);
          FUN_009ad920();
          std::ios_base::getloc();
          plVar1 = (longlong *)std::locale::use_facet(piVar3);
          param_1 = (id *)*plVar1;
          (**(code **)(param_1 + 0x38))();
          std::locale::~locale((locale *)param_1);
          std::ostream::put((char)param_1);
          std::ostream::flush();
        }
        if (((byte)local_48[0] & 1) != 0) {
          operator_delete(param_1);
        }
        uVar5 = local_a8;
        if ((local_b0[0] & 1) == 0) {
          uVar5 = (ulonglong)(local_b0[0] >> 1);
        }
        psVar11 = psVar10 + uVar5;
        uVar6 = (ulonglong)local_90[0];
        psVar10 = (string *)(ulonglong)(local_90[0] >> 1);
        if ((local_90[0] & 1) != 0) {
          psVar10 = local_88;
        }
        if (psVar11 < psVar10) {
          piVar3 = (id *)((ulonglong)local_90 | 1);
          if ((local_90[0] & 1) != 0) {
            piVar3 = local_80;
          }
          param_1 = (id *)((ulonglong)local_b0 | 1);
          if ((local_b0[0] & 1) != 0) {
            param_1 = local_a0;
          }
          if (uVar5 != 0) {
            piVar9 = piVar3 + (longlong)psVar11;
            do {
              uVar4 = 0;
              do {
                if (*piVar9 == param_1[uVar4]) {
                  if ((piVar9 == (id *)(psVar10 + (longlong)piVar3)) ||
                     (psVar10 = (string *)(piVar9 + -(longlong)piVar3),
                     psVar10 == (string *)0xffffffffffffffff)) goto LAB_009c9aee;
                  goto LAB_009c98c0;
                }
                uVar4 = uVar4 + 1;
              } while (uVar5 != uVar4);
              piVar9 = piVar9 + 1;
            } while (piVar9 != (id *)(psVar10 + (longlong)piVar3));
LAB_009c9aee:
            if (psVar11 == (string *)0xffffffffffffffff) goto LAB_009c9bfc;
          }
          goto LAB_009c9af8;
        }
        goto LAB_009c9bfc;
      }
    }
LAB_009c9af8:
    uVar7 = (ulong)piVar8;
    param_1 = (id *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    psVar10 = (string *)(uVar6 >> 1);
    if ((uVar6 & 1) != 0) {
      psVar10 = local_88;
    }
    if (psVar11 < psVar10) {
      if (psVar11 == (string *)0x0) {
        param_1 = (id *)0xffffffffffffffff;
        std::string::string((string *)0xffffffffffffffff,(string *)0x0,(ulong)local_90,uVar7,paVar12
                           );
        FUN_009ad920();
      }
      else {
        if ((*local_78 & 1) == 0) {
          uVar6 = (ulonglong)(*local_78 >> 1);
        }
        else {
          uVar6 = *(ulonglong *)(local_78 + 8);
        }
        FUN_009ad920(local_78,uVar6);
        if ((local_60 & 1) == 0) {
          local_58 = (ulonglong)(local_60 >> 1);
        }
        FUN_009ad920(1,local_58);
        param_1 = (id *)0xffffffffffffffff;
        std::string::string((string *)0xffffffffffffffff,psVar11,(ulong)local_90,uVar7,paVar12);
        FUN_009ad920();
      }
      if (((byte)local_48[0] & 1) != 0) {
        operator_delete(param_1);
      }
    }
LAB_009c9bfc:
    if ((local_b0[0] & 1) != 0) {
      operator_delete(param_1);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(param_1);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  if ((char)local_94 != '\0') {
    std::ios_base::getloc();
    plVar1 = (longlong *)std::locale::use_facet(param_1);
    plVar2 = (locale *)*plVar1;
    (**(code **)(plVar2 + 0x38))();
    std::locale::~locale(plVar2);
    std::ostream::put((char)plVar2);
    std::ostream::flush();
  }
  return;
code_r0x009c9865:
  uVar4 = uVar4 + 1;
  if (uVar5 == uVar4) goto code_r0x009c986d;
  goto LAB_009c9860;
code_r0x009c986d:
  piVar9 = piVar9 + 1;
  if (piVar9 == (id *)(psVar10 + (longlong)piVar8)) goto LAB_009c9af8;
  goto LAB_009c985a;
}


